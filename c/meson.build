project('practice', 'c',
version : '0.1',
default_options : ['warning_level=3'])
incdir = include_directories('include')
math = meson.get_compiler('c').find_library('m', required: true)
exe = executable('practice', 'practice.c', include_directories: incdir,
install : true, dependencies: math)

test('basic', exe)
