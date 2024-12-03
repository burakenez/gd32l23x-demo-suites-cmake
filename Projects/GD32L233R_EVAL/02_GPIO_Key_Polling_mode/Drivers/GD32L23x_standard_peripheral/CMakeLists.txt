project(GD32L23x_standard_peripheral LANGUAGES C CXX ASM)

# Comment-out unused source files.
add_library(GD32L23x_standard_peripheral OBJECT
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_rcu.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_rtc.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_slcd.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_spi.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_syscfg.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_timer.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_trng.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_usart.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_vref.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_wwdgt.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_adc.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_can.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_cau.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_cau_aes.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_cau_des.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_cau_tdes.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_cmp.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_crc.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_ctc.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_dac.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_dbg.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_dma.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_exti.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_fmc.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_fwdgt.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_gpio.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_i2c.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_lptimer.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_lpuart.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_misc.c
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Source/gd32l23x_pmu.c
    )

target_include_directories(GD32L23x_standard_peripheral PUBLIC
    ${DRIVERS_DIR}/GD32L23x_standard_peripheral/Include
    )

# CMSIS header only library is linked.
target_link_libraries(GD32L23x_standard_peripheral PUBLIC CMSIS)
