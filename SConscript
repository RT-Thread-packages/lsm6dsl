from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

src += Glob('libraries/lsm6dsl.c')
src += Glob('libraries/lsm6dsl_reg.c')

if GetDepend('PKG_LSM6DSL_USING_SENSOR_V1'):
    src += ['st_lsm6dsl_sensor_v1.c']

# add lsm6dsl include path.
path  = [cwd, cwd + '/libraries']

# add src and include to group.
group = DefineGroup('lsm6dsl', src, depend = ['PKG_USING_LSM6DSL'], CPPPATH = path)

Return('group')
