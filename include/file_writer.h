#ifndef __FILE_WRITER_API
#define __FILE_WRITER_API

#include <stdio.h>
//opens the log file for writing
FILE * open_log_file(char * path);
// we will use this function to write contents to the log file
void write_log_to_file(FILE * file, unsigned long long free_memory);
//closes the log file
void close_log_file(FILE * file);
#endif