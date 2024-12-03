project(GD32L23x_usbd_library LANGUAGES C CXX ASM)

# Comment-out unused source files.
add_library(GD32L23x_usbd_library OBJECT
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/audio/Source/audio_out_itf.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/cdc/Source/cdc_acm_core.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/dfu/Source/dfu_core.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/dfu/Source/dfu_mem.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/hid/Source/custom_hid_core.c
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/hid/Source/standard_hid_core.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/iap/Source/usb_iap_core.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/msc/Source/usbd_msc_bbb.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/msc/Source/usbd_msc_core.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/msc/Source/usbd_msc_scsi.c
    # ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/printer/Source/printer_core.c
    ${DRIVERS_DIR}/GD32L23x_usbd_library/device/Source/usbd_core.c
    ${DRIVERS_DIR}/GD32L23x_usbd_library/device/Source/usbd_enum.c
    ${DRIVERS_DIR}/GD32L23x_usbd_library/device/Source/usbd_pwr.c
    ${DRIVERS_DIR}/GD32L23x_usbd_library/device/Source/usbd_transc.c
    ${DRIVERS_DIR}/GD32L23x_usbd_library/usbd/Source/usbd_lld_core.c
    ${DRIVERS_DIR}/GD32L23x_usbd_library/usbd/Source/usbd_lld_int.c
    )

target_include_directories(GD32L23x_usbd_library PUBLIC
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/audio/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/cdc/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/dfu/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/hid/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/iap/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/msc/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/class/device/printer/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/device/Include
    ${DRIVERS_DIR}/GD32L23x_usbd_library/usbd/Include

    # Add "usbd_conf.h" path.
    ${CMAKE_SOURCE_DIR}/Application/Core/Inc
    )

# CMSIS header only library is linked.
target_link_libraries(GD32L23x_usbd_library PUBLIC CMSIS)

# GD32L23x_standard_peripheral library is linked.
target_link_libraries(GD32L23x_usbd_library PUBLIC GD32L23x_standard_peripheral)

# GD32L233R_EVAL library is linked.
target_link_libraries(GD32L23x_usbd_library PUBLIC GD32L233R_EVAL)
