#include <sys/sysinfo.h>
#include "memory_api.h"

unsigned long long get_free_system_memory() {
    struct sysinfo info;
    if (sysinfo(&info) < 0) {
         return 0;
    }
    return info.freeram;;
}