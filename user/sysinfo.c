#include "kernel/param.h"
#include "kernel/types.h"
#include "user/user.h"
#include "kernel/sysinfo.h"



int main(int argc, char *argv[]) {
    if(argc != 1) {
        fprintf(2, "[%s:failed] usage: sysfinfo, without parameters", argv[0]);
        exit(1);
    }
    struct sysinfo info;
    sysinfo(&info);
    printf("free space: %d, used processes num:%d\n", info.freemem, info.nproc);
    exit(0);
}