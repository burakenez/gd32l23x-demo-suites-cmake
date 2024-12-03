project(GD32L233R_EVAL LANGUAGES C CXX ASM)

add_library(GD32L233R_EVAL OBJECT 
    ${DRIVERS_DIR}/BSP/GD32L233R_EVAL/gd32l233r_eval.c
    )

target_include_directories(GD32L233R_EVAL PUBLIC
    ${DRIVERS_DIR}/BSP/GD32L233R_EVAL
    )

target_link_libraries(GD32L233R_EVAL PUBLIC GD32L23x_standard_peripheral)
