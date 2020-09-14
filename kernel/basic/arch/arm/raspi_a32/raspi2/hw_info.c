#include <kernel/hw_info.h>
#include <kernel/system.h>
#include <kstring.h>
#include "bcm283x/mailbox.h"
#include "bcm283x/cpu_freq.h"

static hw_info_t _hw_info;

void hw_info_init(void) {
	strcpy(_hw_info.machine, "raspi2");
	_hw_info.phy_mem_size = 1024*MB;
	_hw_info.phy_mmio_base = 0x3F000000;
	_hw_info.mmio_size = 16*MB;
}

inline hw_info_t* get_hw_info(void) {
	return &_hw_info;
}

void arch_vm(page_dir_entry_t* vm) {
	uint32_t offset = 0x40000000 - _hw_info.phy_mmio_base; //CORE0_ROUTING
	uint32_t vbase = MMIO_BASE + offset;
	uint32_t pbase = _hw_info.phy_mmio_base + offset;
	map_pages(vm, vbase, pbase, pbase+16*KB, AP_RW_D, 1);

	offset = 0x00201000; //UART_OFFSET
	vbase = MMIO_BASE + offset;
	pbase = _hw_info.phy_mmio_base + offset;
	map_page(vm, vbase, pbase, AP_RW_D, 0);
}

void hw_optimise(void) {
	cpu_freq_init();	
}