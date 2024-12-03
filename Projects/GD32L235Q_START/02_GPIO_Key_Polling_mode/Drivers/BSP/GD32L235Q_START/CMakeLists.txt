project(GD32L235Q_START LANGUAGES C CXX ASM)

add_library(GD32L235Q_START OBJECT 
    ${DRIVERS_DIR}/BSP/GD32L235Q_START/gd32l235q_start.c
    )

target_include_directories(GD32L235Q_START PUBLIC
    ${DRIVERS_DIR}/BSP/GD32L235Q_START
    )

target_link_libraries(GD32L235Q_START PUBLIC GD32L23x_standard_peripheral)
