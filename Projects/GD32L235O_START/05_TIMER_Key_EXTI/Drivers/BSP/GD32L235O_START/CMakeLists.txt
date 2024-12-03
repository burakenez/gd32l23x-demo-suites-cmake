project(GD32L235O_START LANGUAGES C CXX ASM)

add_library(GD32L235O_START OBJECT 
    ${DRIVERS_DIR}/BSP/GD32L235O_START/gd32l235o_start.c
    )

target_include_directories(GD32L235O_START PUBLIC
    ${DRIVERS_DIR}/BSP/GD32L235O_START
    )

target_link_libraries(GD32L235O_START PUBLIC GD32L23x_standard_peripheral)
