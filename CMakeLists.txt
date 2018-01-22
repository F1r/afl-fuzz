cmake_minimum_required(VERSION 3.7)
project(afl_2_52b)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        experimental/argv_fuzzing/argv-fuzz-inl.h
        experimental/persistent_demo/persistent_demo.c
        experimental/post_library/post_library.so.c
        experimental/post_library/post_library_png.so.c
        libdislocator/libdislocator.so.c
        libtokencap/libtokencap.so.c
        llvm_mode/afl-clang-fast.c
        llvm_mode/afl-llvm-pass.so.cc
        llvm_mode/afl-llvm-rt.o.c
        qemu_mode/patches/afl-qemu-cpu-inl.h
        afl-analyze.c
        afl-as.c
        afl-as.h
        afl-fuzz.c
        afl-gcc.c
        afl-gotcpu.c
        afl-showmap.c
        afl-tmin.c
        alloc-inl.h
        config.h
        debug.h
        hash.h
        test-instr.c
        types.h)

add_executable(afl_2_52b ${SOURCE_FILES})
