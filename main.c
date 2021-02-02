#include <stdio.h>

#include "timer/timer.h"
#include "defines.h"
#include "pattern.h"

#define OUTPUT(pattern_table, output_file) fwrite(pattern_table, sizeof(pattern_table), 1, output_file)

#define PROCESS_PATTERN(start_value, num_digits, table_length, output_file) \
	do \
	{ \
		OUTPUT(pattern ## start_value, output_file); \
		for (uint i = start_value + table_length; i < start_value ## 0; i += table_length) \
		{ \
			increase_values(pattern ## start_value, num_digits); \
			OUTPUT(pattern ## start_value, output_file); \
		} \
	} \
	while (0)

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage:\n\t%s [output file]\n", argv[0]);
		return -1;
	}
	
	FILE *output_file = NULL;
	if ( (output_file = fopen(argv[1], "w")) == NULL )
	{
		fprintf(stderr, "Couldn't open output file\n");
		return -1;
	}

	Timer timer;
	timer_start(&timer);

	uint table_length = PATTERN_COUNT * PATTERN_LENGTH;

	/* 1 - 9 */
	OUTPUT(pattern_start, output_file);

	/* 10 - 99 */
	OUTPUT(pattern10, output_file);

	/* 100 - 999 */
	PROCESS_PATTERN(100, 3, table_length, output_file);

	/* 1,000 - 9,999 */
	PROCESS_PATTERN(1000, 4, table_length, output_file);

	/* 10,000 - 99,999 */
	PROCESS_PATTERN(10000, 5, table_length, output_file);

	/* 100,000 - 999,999 */
	PROCESS_PATTERN(100000, 6, table_length, output_file);

	/* 1,000,000 - 9,999,999 */
	PROCESS_PATTERN(1000000, 7, table_length, output_file);

	/* 10,000,000 - 99,999,999 */
	PROCESS_PATTERN(10000000, 8, table_length, output_file);

	/* 100,000,000 - 999,999,999 */
	PROCESS_PATTERN(100000000, 9, table_length, output_file);

	OUTPUT("Buzz", output_file);

	timer_end(&timer);
	printf("Time elapsed: " U_SECS " s.\n", timer_usec(timer));
	
	fclose(output_file);
	return 0;
}
