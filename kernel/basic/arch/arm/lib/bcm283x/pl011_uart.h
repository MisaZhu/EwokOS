#ifndef PL011_UART_H
#define PL011_UART_H

#include <stdint.h>

int32_t pl011_uart_init(void);
int32_t pl011_uart_write(const void* data, uint32_t size);

#endif
