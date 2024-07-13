## CMakeLists which sets up the custom targets in this project.
#----------------------------------------------------------------------------------------------
# Bluepill ---------------------------------------------------------------

add_library(mbed-bluepill-f103c8 INTERFACE)
target_sources(mbed-bluepill-f103c8 INTERFACE TARGET_BLUEPILL_F103C8/PeripheralPins.c)
target_include_directories(mbed-bluepill-f103c8 INTERFACE TARGET_BLUEPILL_F103C8)

# Now, we can link the mbed-stm32f103x8 target, which pulls in all the existing STM32f103c8 headers,
# linker scripts, and code.
target_link_libraries(mbed-bluepill-f103c8 INTERFACE mbed-stm32f103x8)
