![header](https://github.com/lyangmdrs/interrupt_priority_exercise/blob/develop/Img/header.png)

***
# Interrupt Priority

The goal of this exercise is to learn how to configure different priorities for peripherals interruptions. 

For this example we will use only two peripherals: **TIM2** and **I2C1_EV**. The position for these peripherals can be founded on the Vector Table (Table 61) from [STM32F4xxx - Reference Manual 0090](https://github.com/lyangmdrs/peripheral_interrupt_exercise/blob/develop/Docs/STM32F4xxx_-_RM0090.pdf).

To understand the behavior of this code we need to know about *Priority Group* and *Sub Priority*.

### Priority Group:
It's used when the procesor is runnig a interrupt handler and another interrupt arrives. Then the pre-empt priotiry values of the two interruptions will be compared, and the interrupt with the *higher* pre-empmt priority level will be allowed to run.

Despite each register is 8 bits wide, on this MCU, only 4 bits are *implemented* to hold the priority value. 

> The number of bits implemented in each MCU depends on manufacturer, and non-implemented low-order bits read as zero and ignore writes.

|Bit 7|Bit 6|Bit 5|Bit 4|Bit 3|Bit 2|Bit 1|Bit 0| 
|-----|-----|-----|-----|-----|-----|-----|-----|
|✔️|✔️|✔️|✔️|❌|❌|❌|❌|❌|

Thus, this MCU has 16 priority levels available, which are: 0x00, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70, 0x80, 0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0 and 0xF0. Since ARM Cortex-M profile NVIC implements “Reversed Priority” numbering scheme, the highest level is 0x00 and the lowest level is 0xF0. So, as *lower* the **value**, *higher* will be the priority **level**. 

### Sub priority 
 It's used only when two interrupts with the same pre-empt values occurs at the same time.
 
### ***What happens if two interruptions with the same Priority Group and the same Sub priority hits the processor at the same time?*** 
Then, the one with the lowest IRQ number will be allowed first.


> Exercise from [**Embedded Systems Programming on ARM Cortex-M3/M4 Processor**](https://www.udemy.com/course/embedded-system-programming-on-arm-cortex-m3m4/)

> For more information, read: [**ARM Cortex-M Interrupts Priority and Priority Grouping**](https://ecoderlenz.com/?p=656)

***
