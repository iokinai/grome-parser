cmake_minimum_required(VERSION 3.5)

set(PROJECT grome-parser)

project(grome-parser LANGUAGES C CXX)

add_library(grome 
    SHARED
    src/tags/a.cxx
    src/tags/a.h
    src/tags/comment.cxx
    src/tags/comment.h
    src/exceptions/not_implemented.cxx
    src/exceptions/not_implemented.h
)