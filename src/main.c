/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <device.h>
#include <devicetree.h>

#define I2C_TEST DT_PATH(soc, i2c_0)
void main(void)
{
	// I2C Device Init
	const struct device *i2c_dev = DEVICE_DT_GET(I2C_TEST);
	if(device_is_ready(i2c_dev))
		printf("success");
	else
		printf("fail");

	while (1) {}
}
