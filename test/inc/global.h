#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>

typedef enum {
    SHUTDOWN = 0x00,
    RUNNING,
    ERROR,
    SYS_RESERVE
}SYS_STATUS;

typedef struct __sys__{
    uint8_t state;
}SYS_Typedef;

extern SYS_Typedef Sys_Info;

#endif

