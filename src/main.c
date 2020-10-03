#include "file_writer.h"
#include "memory_api.h"

#include <unistd.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Provide log file name\n");
        return 0;
    } 

    unsigned long long free_memory = 0;
    while(1) {
        free_memory = get_free_system_memory();
        FILE * log = open_log_file(argv[1]);
        write_log_to_file(log, free_memory);
        close_log_file(log);
        sleep(5);
    }
}