project(GD32L233C_START LANGUAGES C CXX ASM)

add_library(GD32L233C_START OBJECT 
    ${DRIVERS_DIR}/BSP/GD32L233C_START/gd32l233c_start.c
    )

target_include_directories(GD32L233C_START PUBLIC
    ${DRIVERS_DIR}/BSP/GD32L233C_START
    )

target_link_libraries(GD32L233C_START PUBLIC GD32L23x_standard_peripheral)
