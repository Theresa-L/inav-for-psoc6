function(target_psoc6 name)
    target_psoc6(
        #NAME ${name}
        #STARTUP startup_stm32f40xx.s
        #SOURCES ${STM32F4_STDPERIPH_SRC}
        #COMPILE_DEFINITIONS ${STM32F405_COMPILE_DEFINITIONS}
        #LINKER_SCRIPT stm32_flash_f405xg
        #SVD STM32F405
        #BOOTLOADER
        #${ARGN}
    )
endfunction()