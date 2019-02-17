project('practice', 'c',
version : '0.1',
default_options : ['warning_level=3'])
incdir = include_directories('include')
exe = executable('practice', 'practice.c', include_directories: incdir,
install : true)

test('basic', exe)
