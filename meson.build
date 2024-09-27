project('sumsum', 'cpp',
  version: '0.1.0',
  default_options: ['cpp_std=c++20'])

src = ['src/main.cpp']
lib = ['src/mylib.cpp']
test_src = ['tests/test_mylib.cpp']
bench_src = ['tests/benchmark_mylib.cpp']

sumsum_lib = library('sumsum', lib,
  include_directories: include_directories('src'))

executable('sumsum', src, link_with: sumsum_lib)

gtest = dependency('gtest')

test_exe = executable('test_sumsum', test_src,
  include_directories: include_directories('src'),
  link_with: sumsum_lib,
  dependencies: [gtest]
)

test('test_sumsum', test_exe)

gbenchmark = dependency('benchmark')

benchmark_exe = executable('benchmark_sumsum', bench_src,
  include_directories: include_directories('src'),
  link_with: sumsum_lib,
  dependencies: [gbenchmark]
)

