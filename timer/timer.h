#ifndef ___TIMER_H___
#	define ___TIMER_H___

#	include "../defines.h"

#	if HOST_OS == WINDOWS_OS
#		include <windows.h>
typedef LARGE_INTEGER __time__;
#	elif HOST_OS == LINUX_OS
#		include <sys/time.h>
typedef struct timeval __time__;
#	endif

#	define M_SECS	"%.3lf"
#	define U_SECS	"%.6lf"

typedef struct
{
	__time__ start;
	__time__ end;
	double sec;
	double msec;
	double usec;
} Timer;

GLOBAL void timer_start				(Timer *timer);
GLOBAL void timer_end				(Timer *timer);
GLOBAL double timer_usec			(Timer timer);
GLOBAL double timer_msec			(Timer timer);

#endif	// ___TIMER_H___
