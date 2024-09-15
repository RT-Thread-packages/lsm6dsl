
#ifndef SENSOR_ST_LSM6DSL_H__
#define SENSOR_ST_LSM6DSL_H__

#include <rtthread.h>
#include <rtdevice.h>

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

#include "lsm6dsl.h"

#define LSM6DSL_ADDR_DEFAULT (0xD6 >> 1)

int rt_hw_lsm6dsl_init(const char *name, struct rt_sensor_config *cfg);

#endif
