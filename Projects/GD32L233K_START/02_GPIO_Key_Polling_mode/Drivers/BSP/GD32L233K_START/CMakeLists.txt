project(GD32L233K_START LANGUAGES C CXX ASM)

add_library(GD32L233K_START OBJECT 
    ${DRIVERS_DIR}/BSP/GD32L233K_START/gd32l233k_start.c
    )

target_include_directories(GD32L233K_START PUBLIC
    ${DRIVERS_DIR}/BSP/GD32L233K_START
    )

target_link_libraries(GD32L233K_START PUBLIC GD32L23x_standard_peripheral)
