set(LIBFOO_SRC_FILES
    foo.h
    foo.cpp
)

# Declare the library
add_library(libfoo STATIC
    ${LIBFOO_SRC_FILES}
)

# Specify here the include directories exported
# by this library
target_include_directories(libfoo PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
