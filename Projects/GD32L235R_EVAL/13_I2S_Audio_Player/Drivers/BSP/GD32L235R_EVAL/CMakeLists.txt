project(GD32L235R_EVAL LANGUAGES C CXX ASM)

add_library(GD32L235R_EVAL OBJECT 
    ${DRIVERS_DIR}/BSP/GD32L235R_EVAL/gd32l235r_eval.c
    )

target_include_directories(GD32L235R_EVAL PUBLIC
    ${DRIVERS_DIR}/BSP/GD32L235R_EVAL
    )

target_link_libraries(GD32L235R_EVAL PUBLIC GD32L23x_standard_peripheral)
