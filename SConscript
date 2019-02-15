from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

src += Glob('sensor_st_lsm6dsl.c')
src += Glob('libraries/lsm6dsl.c')
src += Glob('libraries/lsm6dsl_reg.c')

# add lsm6dsl include path.
path  = [cwd, cwd + '/libraries']

# add src and include to group.
group = DefineGroup('lsm6dsl', src, depend = ['PKG_USING_LSM6DSL'], CPPPATH = path)

Return('group')
