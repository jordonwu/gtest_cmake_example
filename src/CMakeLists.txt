set(MAIN_SRC_FILES
    main.cpp
)

add_executable(myApp
    ${MAIN_SRC_FILES}
)

# Specify here the libraries this program depends on
target_link_libraries(myApp
    libfoo
)

install(TARGETS myApp DESTINATION bin)
