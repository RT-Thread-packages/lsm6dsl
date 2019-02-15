
#ifndef SENSOR_ST_LSM6DSL_H__
#define SENSOR_ST_LSM6DSL_H__

#include "sensor.h"
#include "lsm6dsl.h"

#define LSM6DSL_ADDR_DEFAULT (0xD6 >> 1)

int rt_hw_lsm6dsl_init(const char *name, struct rt_sensor_config *cfg);

#endif
