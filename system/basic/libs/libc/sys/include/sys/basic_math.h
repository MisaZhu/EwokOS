#ifndef BASIC_MATH_H
#define BASIC_MATH_H

#include <sys/ewokdef.h>

#ifdef __cplusplus 
extern "C" {
#endif

uint32_t div_u32(uint32_t v, uint32_t by);
uint32_t mod_u32(uint32_t v, uint32_t by);
uint32_t abs32(int32_t v);
uint32_t random_u32(void);
uint32_t random_to(uint32_t to);

#ifdef __cplusplus
} 
#endif

#endif
