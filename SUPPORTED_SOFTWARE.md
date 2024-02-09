## Software Modules Packaged with FSP

### FSP Top Level Modules
  * Analog
    * [ADC (r_adc_c)](https://renesas.github.io/rzg-fsp/group___a_d_c___c.html)
  * Connectivity
    * [CANFD (r_canfd)](https://renesas.github.io/rzg-fsp/group___c_a_n_f_d.html)
    * [I2C Communication Device (rm_comms_i2c)](https://renesas.github.io/rzg-fsp/group___r_m___c_o_m_m_s___i2_c.html)
    * [I2C Master (r_riic_master)](https://renesas.github.io/rzg-fsp/group___r_i_i_c___m_a_s_t_e_r.html)
    * [I2C Shared Bus (rm_comms_i2c)](https://renesas.github.io/rzg-fsp/group___r_m___c_o_m_m_s___i2_c.html)
    * [Message Handling Unit in NonSecure (r_mhu_ns)](https://renesas.github.io/rzg-fsp/group___m_h_u___n_s.html)
    * [Message Handling Unit in NonSecure (r_mhu_ns_swint_get)](https://renesas.github.io/rzg-fsp/group___m_h_u___n_s___s_w_i_n_t___g_e_t.html)
    * [Message Handling Unit in NonSecure (r_mhu_ns_swint_set)](https://renesas.github.io/rzg-fsp/group___m_h_u___n_s___s_w_i_n_t___s_e_t.html)
    * [Message Handling Unit in Secure (r_mhu_s)](https://renesas.github.io/rzg-fsp/group___m_h_u___s.html)
    * [SPI (r_rspi)](https://renesas.github.io/rzg-fsp/group___r_s_p_i.html)
    * [UART (r_scif_uart)](https://renesas.github.io/rzg-fsp/group___s_c_i_f___u_a_r_t.html)
  * Input
    * [External IRQ (r_intc_irq)](https://renesas.github.io/rzg-fsp/group___i_n_t_c___i_r_q.html)
    * [External IRQ (r_intc_nmi)](https://renesas.github.io/rzg-fsp/group___i_n_t_c___n_m_i.html)
  * Monitoring
    * [Watchdog (r_wdt)](https://renesas.github.io/rzg-fsp/group___w_d_t.html)
  * OpenAMP
    * [all](https://github.com/OpenAMP)
  * RTOS
    * [FreeRTOS Heap 1](https://www.freertos.org/a00111.html#heap_1)
    * [FreeRTOS Heap 2](https://www.freertos.org/a00111.html#heap_2)
    * [FreeRTOS Heap 3](https://www.freertos.org/a00111.html#heap_3)
    * [FreeRTOS Heap 4](https://www.freertos.org/a00111.html#heap_4)
    * [FreeRTOS Heap 5](https://www.freertos.org/a00111.html#heap_5)
    * [FreeRTOS Port (rm_freertos_port)](https://renesas.github.io/rzg-fsp/group___r_m___f_r_e_e_r_t_o_s___p_o_r_t.html)
  * Sensor
    * [HS300X Temperature/Humidity Sensor (rm_hs300x)](https://renesas.github.io/rzg-fsp/group___r_m___h_s300_x.html)
    * [HS400X Temperature/Humidity Sensor (rm_hs400x)](https://renesas.github.io/rzg-fsp/group___r_m___h_s400_x.html)
    * [ZMOD4XXX Gas Sensor (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
  * Storage
    * [QSPI (r_xspi_qspi)](https://renesas.github.io/rzg-fsp/group___x_s_p_i___q_s_p_i.html)
  * System
    * [I/O Port (r_ioport)](https://renesas.github.io/rzg-fsp/group___i_o_p_o_r_t.html)
  * Timers
    * [Multi-Function Timer (r_mtu3)](https://renesas.github.io/rzg-fsp/group___m_t_u3.html)
    * [Port Output Enable for GPT (r_poeg)](https://renesas.github.io/rzg-fsp/group___p_o_e_g___a_p_i.html)
    * [Timer (r_gtm)](https://renesas.github.io/rzg-fsp/group___g_t_m.html)
    * [Timer, General PWM (r_gpt)](https://renesas.github.io/rzg-fsp/group___g_p_t.html)
  * Transfer
    * [Transfer (r_dmac_b)](https://renesas.github.io/rzg-fsp/group___d_m_a_c___b.html)


### FSP Module Dependencies
  * OpenAMP
    * [libmetal](https://github.com/OpenAMP/libmetal)
    * [open-amp](https://github.com/OpenAMP/open-amp)
  * Sensor
    * [ZMOD4410 IAQ 1st Generation (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
    * [ZMOD4410 IAQ 2nd Generation (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
    * [ZMOD4410 IAQ 2nd Generation Ultra Low Power (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
    * [ZMOD4410 Odor (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
    * [ZMOD4410 Sulfur-based Odor (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
    * [ZMOD4510 OAQ 1st Generation (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
    * [ZMOD4510 OAQ 2nd Generation (rm_zmod4xxx)](https://renesas.github.io/rzg-fsp/group___r_m___z_m_o_d4_x_x_x.html)
  * System
    * [Arm CMSIS5 Core (M)](https://arm-software.github.io/CMSIS_5/Core/html/index.html)
