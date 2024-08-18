/*
 * TIMER.h
 *
 * Created: 8/14/2024 4:08:00 PM
 *  Author: Ahmed Ragab
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "macro_function.h"
#include <avr/interrupt.h>


void TIMER0_normal_init_with_interrupt(void);

void TIMER0_CTC_init_with_interrupt(void);

void TIMER0_CTC_wave_nonpwm(void);

void TIMER0_fast_pwm_wave(void);

void TIMER0_phase_correct_pwm_wave(void);

void TIMER2_normal_init_with_interrupt(void);

void TIMER2_CTC_init_with_interrupt(void);

void TIMER2_CTC_wave_nonpwm(void);

void TIMER2_fast_pwm_wave(void);

void TIMER2_phase_correct_pwm_wave(void);

void TIMER1_fast_pwm_8bit_wave(void);

void TIMER1_ICU_init(void);

unsigned short TIMER1_ICU_raising(void);

unsigned short TIMER1_ICU_failing(void);

void TIMER1_ICU_init_with_interrupt(void);

#endif /* TIMER_H_ */