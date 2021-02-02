#include <math.h>
#include "timer.h"

#if HOST_OS == WINDOWS_OS
#	define GET_TIME(time_struct) 	QueryPerformanceCounter(&(time_struct))
#elif HOST_OS == LINUX_OS
#	define GET_TIME(time_struct) 	gettimeofday(&(time_struct), NULL)
#else
#	error "Unknown operating system"
#endif

// calculating seconds, milliseconds and microseconds
INTERNAL void timer_calculate(Timer *timer);

void timer_start(Timer *timer)
{
	GET_TIME(timer->start);
}

void timer_end(Timer *timer)
{
	GET_TIME(timer->end);
	timer_calculate(timer);
}

double timer_usec(Timer timer)
{
	return timer.sec + timer.usec * 1e-6;
}

double timer_msec(Timer timer)
{
	return timer.sec + timer.msec * 1e-3;
}

void timer_calculate(Timer *timer)
{
#if HOST_OS == WINDOWS_OS

	// calculating elapsed time
	__time__ elapsed_time;
	elapsed_time.QuadPart = timer->end.QuadPart - timer->start.QuadPart;

	// calculating ticks frequency per second
	__time__ frequency;
	QueryPerformanceFrequency(&frequency);

	// storing seconds
	timer->sec	= (double)(elapsed_time.QuadPart / frequency.QuadPart);

	// converting to microseconds
	timer->usec	= (double)((elapsed_time.QuadPart * 1000000) / frequency.QuadPart);

	// converting to milliseconds
	timer->msec	= trunc(timer->usec * 1e-3);
#elif HOST_OS == LINUX_OS

	// seconds
	timer->sec	= (double)(timer->end.tv_sec	- timer->start.tv_sec);

	// microseconds
	timer->usec	= (double)(timer->end.tv_usec - timer->start.tv_usec);

	// milliseconds
	timer->msec	= trunc(timer->usec * 1e-3);
#endif
}
