#include <kernel.h>
#include <device.h>
#include <devicetree.h>
#include <toolchain.h>
#include "i2c/i2c_dev.h"

#define DT_DRV_COMPAT foo,i2c-driver

static int i2c_init(const struct device *dev)
{   
	return 0;
}

#define I2C_DEVICE_INIT(name)	\
static struct i2c_data i2c_data_##name;			\
static const struct i2c_config i2c_config_##name={			\
	.base=0x0			\
};			\
			\
DEVICE_DT_DEFINE( 			\
			DT_NODELABEL(name), 				\
			i2c_init,			\
			NULL,				\
		    &i2c_data_##name,				\
			&i2c_config_##name,			\
		    POST_KERNEL,				\
			CONFIG_KERNEL_INIT_PRIORITY_DEVICE, \
		    NULL);

I2C_DEVICE_INIT(i2c_custom)
