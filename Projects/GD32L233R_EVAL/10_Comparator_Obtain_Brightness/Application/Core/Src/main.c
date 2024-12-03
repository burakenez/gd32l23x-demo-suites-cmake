/*!
    \file    main.c
    \brief   Comparator_Obtain_Brightness demo

    \version 2024-03-25, V2.2.0, demo for GD32L23x
*/

/*
    Copyright (c) 2024, GigaDevice Semiconductor Inc.

    Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors
       may be used to endorse or promote products derived from this software without
       specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
OF SUCH DAMAGE.
*/

#include "gd32l23x.h"
#include "systick.h"
#include "gd32l233r_eval.h"


/*!
    \brief      main function
    \param[in]  none
    \param[out] none
    \retval     none
*/
int main(void)
{
    /* initialize LED */
    gd_eval_led_init(LED2);

    /* enable CMP clock */
    rcu_periph_clock_enable(RCU_CMP);
    /* enable GPIO clock */
    rcu_periph_clock_enable(RCU_GPIOA);

    /* configure comparator plus input */
    gpio_mode_set(GPIOA, GPIO_MODE_ANALOG, GPIO_PUPD_NONE, GPIO_PIN_1);

    /* initialize CMP0 */
    cmp_deinit(CMP0);
    /* configure CMP0 mode */
    cmp_mode_init(CMP0, CMP_MODE_HIGHSPEED, CMP_INVERTING_INPUT_VREFINT, CMP_HYSTERESIS_NO);
    /* configure CMP0 output */
    cmp_output_init(CMP0, CMP_OUTPUT_NONE, CMP_OUTPUT_POLARITY_NONINVERTED);

    /* when using VREFINT as inverting input, the voltage bridge and voltage scaler should be enable */
    cmp_voltage_scaler_enable(CMP0);
    cmp_scaler_bridge_enable(CMP0);

    /* clear exti line21 interrupt flag */
    exti_flag_clear(EXTI_21);
    /* initialize exti line21 */
    exti_init(EXTI_21, EXTI_INTERRUPT, EXTI_TRIG_BOTH);
    /* enable exti line21 interrupt */
    exti_interrupt_enable(EXTI_21);

    /* configure CMP NVIC */
    nvic_irq_enable(CMP0_IRQn, 0U);

    /* enable comparator */
    cmp_enable(CMP0);

    while(1) {
    }
}



