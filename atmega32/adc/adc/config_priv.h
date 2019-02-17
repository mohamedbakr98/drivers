#ifndef CONFIG_PRIV_H
#define CONFIG_PRIV_H

#include "config.h"

#if LEFT_ADJ == TRUE
#define ADMUX_LEFT_ADJUST 0b00100000
#else
#define ADMUX_LEFT_ADJUST 0b00000000
#endif

#if ADC_ENABLE == TRUE
#define ADCSRA_ADC_ENABLE 0b10000000
#else
#define ADCSRA_ADC_ENABLE 0b00000000
#endif

#if ADCSRA_AUTO_TRIGGER_ENABLE == TRUE
#define ADCSRA_AUTO_TRIGGER_ENABLE 0b00100000
#else
// AUTO TRIGGER MODE is disables
#define ADCSRA_AUTO_TRIGGER_ENABLE 0b00000000
#endif

#define ADCSRA_START_CONVERSION    0b01000000

#endif