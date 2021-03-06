# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\DGilliland\Documents\GitHub\ODAS\ODAS-PSOC5\Projects\ODAS-PSOC5-I2CIO8-BlinkLED3.cydsn\ODAS-PSOC5-I2CIO8-BlinkLED3.cyprj
# Date: Wed, 10 May 2017 14:20:11 GMT
#set_units -time ns
create_clock -name {CyXTAL} -period 62.5 -waveform {0 31.25} [list [get_pins {ClockBlock/xtal}]]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 3 5} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyBUS_CLK(fixed-function)} -period 41.666666666666664 -waveform {0 20.8333333333333} [get_pins {ClockBlock/clk_bus_glb_ff}]
create_generated_clock -name {UART_1_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 625 1251} -nominal_period 13020.833333333332 [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 12000001 24000001} [list [get_pins {ClockBlock/dclk_glb_1}]]


# Component constraints for C:\Users\DGilliland\Documents\GitHub\ODAS\ODAS-PSOC5\Projects\ODAS-PSOC5-I2CIO8-BlinkLED3.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\DGilliland\Documents\GitHub\ODAS\ODAS-PSOC5\Projects\ODAS-PSOC5-I2CIO8-BlinkLED3.cydsn\ODAS-PSOC5-I2CIO8-BlinkLED3.cyprj
# Date: Wed, 10 May 2017 14:20:05 GMT
