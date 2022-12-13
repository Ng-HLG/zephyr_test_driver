if(CONFIG_MY_I2C_DRIVER)
    zephyr_library()
    zephyr_library_sources(i2c_dev.c)
endif()

