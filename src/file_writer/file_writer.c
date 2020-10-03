#include "file_writer.h"

// Open the log-file in append mode and return it
FILE * open_log_file(char * file_path) {
    FILE * fp = fopen(file_path, "a");
    return fp;
}

// Close the file 
void close_log_file(FILE * fp) {
    if(fp) {
        fclose(fp);
    }
}

//write log entry into the file
void write_log_to_file(FILE * fp, unsigned long long free_memory) {
    if(fp) {
        fprintf(fp, "free_memory=%llu\n", free_memory);
    }
}