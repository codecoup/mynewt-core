/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

INT_VECTOR_STACK_TOP(__StackTop)
INT_VECTOR_RESET_HANDLER(Reset_Handler)
INT_VECTOR_NMI_HANDLER(NMI_Handler)
INT_VECTOR_HARDFAULT_HANDLER(HardFault_Handler)
INT_VECTOR_MEMMANAGE_HANDLER(MemManage_Handler)
INT_VECTOR_BUSFAULT_HANDLER(BusFault_Handler)
INT_VECTOR_USAGEFAULT_HANDLER(UsageFault_Handler)
INT_VECTOR_UNUSED(0)
INT_VECTOR_UNUSED(0)
INT_VECTOR_UNUSED(0)
INT_VECTOR_UNUSED(0)
INT_VECTOR_SVC_HANDLER(SVC_Handler)
INT_VECTOR_DEBUGMON_HANDLER(DebugMon_Handler)
INT_VECTOR_UNUSED(0)
INT_VECTOR_PENDSV_HANDLER(PendSV_Handler)
INT_VECTOR_SYSTICK_HANDLER(SysTick_Handler)

INT_VECTOR(DMA0_DMA16_IRQHandler)
INT_VECTOR(DMA1_DMA17_IRQHandler)
INT_VECTOR(DMA3_DMA19_IRQHandler)
INT_VECTOR(DMA2_DMA18_IRQHandler)
INT_VECTOR(DMA4_DMA20_IRQHandler)
INT_VECTOR(DMA5_DMA21_IRQHandler)
INT_VECTOR(DMA6_DMA22_IRQHandler)
INT_VECTOR(DMA7_DMA23_IRQHandler)
INT_VECTOR(DMA8_DMA24_IRQHandler)
INT_VECTOR(DMA9_DMA25_IRQHandler)
INT_VECTOR(DMA10_DMA26_IRQHandler)
INT_VECTOR(DMA11_DMA27_IRQHandler)
INT_VECTOR(DMA12_DMA28_IRQHandler)
INT_VECTOR(DMA13_DMA29_IRQHandler)
INT_VECTOR(DMA14_DMA30_IRQHandler)
INT_VECTOR(DMA15_DMA31_IRQHandler)
INT_VECTOR(DMA_Error_IRQHandler)
INT_VECTOR(MCM_IRQHandler)
INT_VECTOR(FTFA_IRQHandler)
INT_VECTOR(Read_Collision_IRQHandler)
INT_VECTOR(LVD_LVW_IRQHandler)
INT_VECTOR(LLWU_IRQHandler)
INT_VECTOR(WDOG_EWM_IRQHandler)
INT_VECTOR(TRNG0_IRQHandler)
INT_VECTOR(I2C0_IRQHandler)
INT_VECTOR(I2C1_IRQHandler)
INT_VECTOR(SPI0_IRQHandler)
INT_VECTOR(SPI1_IRQHandler)
INT_VECTOR(I2S0_Tx_IRQHandler)
INT_VECTOR(I2S0_Rx_IRQHandler)
INT_VECTOR(LPUART0_IRQHandler)
INT_VECTOR(LPUART1_IRQHandler)
INT_VECTOR(LPUART2_IRQHandler)
INT_VECTOR(LPUART3_IRQHandler)
INT_VECTOR(LPUART4_IRQHandler)
INT_VECTOR(Reserved51_IRQHandler)
INT_VECTOR(Reserved52_IRQHandler)
INT_VECTOR(EMVSIM0_IRQHandler)
INT_VECTOR(EMVSIM1_IRQHandler)
INT_VECTOR(ADC0_IRQHandler)
INT_VECTOR(CMP0_IRQHandler)
INT_VECTOR(CMP1_IRQHandler)
INT_VECTOR(FTM0_IRQHandler)
INT_VECTOR(FTM1_IRQHandler)
INT_VECTOR(FTM2_IRQHandler)
INT_VECTOR(CMT_IRQHandler)
INT_VECTOR(RTC_IRQHandler)
INT_VECTOR(RTC_Seconds_IRQHandler)
INT_VECTOR(PIT0CH0_IRQHandler)
INT_VECTOR(PIT0CH1_IRQHandler)
INT_VECTOR(PIT0CH2_IRQHandler)
INT_VECTOR(PIT0CH3_IRQHandler)
INT_VECTOR(PDB0_IRQHandler)
INT_VECTOR(USB0_IRQHandler)
INT_VECTOR(USBDCD_IRQHandler)
INT_VECTOR(Reserved71_IRQHandler)
INT_VECTOR(DAC0_IRQHandler)
INT_VECTOR(MCG_IRQHandler)
INT_VECTOR(LPTMR0_LPTMR1_IRQHandler)
INT_VECTOR(PORTA_IRQHandler)
INT_VECTOR(PORTB_IRQHandler)
INT_VECTOR(PORTC_IRQHandler)
INT_VECTOR(PORTD_IRQHandler)
INT_VECTOR(PORTE_IRQHandler)
INT_VECTOR(SWI_IRQHandler)
INT_VECTOR(SPI2_IRQHandler)
INT_VECTOR(Reserved82_IRQHandler)
INT_VECTOR(Reserved83_IRQHandler)
INT_VECTOR(Reserved84_IRQHandler)
INT_VECTOR(Reserved85_IRQHandler)
INT_VECTOR(FLEXIO0_IRQHandler)
INT_VECTOR(FTM3_IRQHandler)
INT_VECTOR(Reserved88_IRQHandler)
INT_VECTOR(Reserved89_IRQHandler)
INT_VECTOR(I2C2_IRQHandler)
INT_VECTOR(Reserved91_IRQHandler)
INT_VECTOR(Reserved92_IRQHandler)
INT_VECTOR(Reserved93_IRQHandler)
INT_VECTOR(Reserved94_IRQHandler)
INT_VECTOR(Reserved95_IRQHandler)
INT_VECTOR(Reserved96_IRQHandler)
INT_VECTOR(SDHC_IRQHandler)
INT_VECTOR(Reserved98_IRQHandler)
INT_VECTOR(Reserved99_IRQHandler)
INT_VECTOR(Reserved100_IRQHandler)
INT_VECTOR(Reserved101_IRQHandler)
INT_VECTOR(Reserved102_IRQHandler)
INT_VECTOR(TSI0_IRQHandler)
INT_VECTOR(TPM1_IRQHandler)
INT_VECTOR(TPM2_IRQHandler)
INT_VECTOR(Reserved106_IRQHandler)
INT_VECTOR(I2C3_IRQHandler)
INT_VECTOR(Reserved108_IRQHandler)
INT_VECTOR(Reserved109_IRQHandler)
INT_VECTOR(Reserved110_IRQHandler)
INT_VECTOR(Reserved111_IRQHandler)
INT_VECTOR(Reserved112_IRQHandler)
INT_VECTOR(Reserved113_IRQHandler)
INT_VECTOR(Reserved114_IRQHandler)
INT_VECTOR(Reserved115_IRQHandler)
INT_VECTOR(QuadSPI0_IRQHandler)
INT_VECTOR(Reserved117_IRQHandler)
INT_VECTOR(Reserved118_IRQHandler)
INT_VECTOR(Reserved119_IRQHandler)
INT_VECTOR(LTC0_IRQHandler)
INT_VECTOR(Reserved121_IRQHandler)
INT_VECTOR(Reserved122_IRQHandler)