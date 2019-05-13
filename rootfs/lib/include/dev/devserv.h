#ifndef DEVSERV_H
#define DEVSERV_H

#include <types.h>
#include <device.h>
#include <fsinfo.h>

typedef struct {
	int32_t (*mount)(uint32_t node, int32_t index);
	int32_t (*unmount)(uint32_t node);
	int32_t (*open)(int32_t pid, int32_t fd, int32_t flags);
	int32_t (*close)(fs_info_t* info);
	int32_t (*remove)(fs_info_t* info, const char* fname);
	int32_t (*add)(int32_t pid, int32_t father_fd, uint32_t node);
	int32_t (*write)(int32_t pid, int32_t fd, void* buf, uint32_t size, int32_t seek);
	int32_t (*read)(int32_t pid, int32_t fd, void* buf, uint32_t size, int32_t seek);
	int32_t (*dma)(int32_t pid, int32_t fd, uint32_t *size);
	int32_t (*flush)(int32_t pid, int32_t fd);
	void* (*ctrl)(int32_t pid, int32_t fd, int32_t cmd, void* data, uint32_t size, int32_t* ret);
} device_t;

void dev_run(device_t* dev, int32_t argc, char** argv);

#endif
