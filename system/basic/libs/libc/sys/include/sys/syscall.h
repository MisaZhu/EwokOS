#ifndef SVC_CALL_H
#define SVC_CALL_H

#include <sys/ewokdef.h>
#include <syscalls.h>

#ifdef __cplusplus
extern "C" {
#endif


int32_t syscall3(int32_t code, int32_t arg0, int32_t arg1, int32_t arg2);

int32_t syscall2(int32_t code, int32_t arg0, int32_t arg1);

int32_t syscall1(int32_t code, int32_t arg0);

int32_t syscall0(int32_t code);

#ifdef __cplusplus
}
#endif

#endif
