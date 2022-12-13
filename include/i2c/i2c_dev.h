
#include <kernel.h>
#include <device.h>
#include <devicetree.h>
#include <toolchain.h>

struct i2c_data {
	struct k_sem sem_lock;
};

struct i2c_config {
	uint32_t base;
};

