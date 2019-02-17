/*
 * std_functions.h
 *
 *  Created on: Jul 7, 2018
 *      Author: Eng - Mohamed Bakr
 */

#ifndef STD_FUNCTIONS_H_
#define STD_FUNCTIONS_H_


#define HIGH 1

#define LOW 1

#define PORT_HIGH 0xff

#define PORT_LOW 0x00

#define PORT_DIRECTION_OUTPUT 0xff

#define PORT_DIRECTION_INPUT 0x00

#define LOWER_NIBBLE_HIGH 0x0f

#define UPPER_NIBBLE_HIGH 0xf0

#define SET_LOWER_NIBBLE(PORTNUM) PORTNUM |= LOWER_NIBBLE_HIGH

#define CLR_LOWER_NIBBLE(PORTNUM) PORTNUM &= UPPER_NIBBLE_HIGH

#define SET_UPPER_NIBBLE(PORTNUM) PORTNUM |= UPPER_NIBBLE_HIGH

#define CLR_UPPER_NIBBLE(PORTNUM) PORTNUM &= LOWER_NIBBLE_HIGH

#define SETBIT(PORTNUM,PINNUM) PORTNUM |= (HIGH<<PINNUM)

#define CLRBIT(PORTNUM,PINNUM) PORTNUM &= ~(HIGH<<PINNUM)

#define GETBIT(PORTNUM,PINNUM) (PORTNUM>>PINNUM) & HIGH

#define TOGGLEBIT(PORTNUM,PINNUM) PORTNUM ^= (HIGH<<PINNUM)


#define SET_PORT(PORTNUM) PORTNUM |= PORT_HIGH

#define CLR_PORT(PORTNUM) PORTNUM &= PORT_LOW

#define conc_helper(A0,A1,A2,A3,A4,A5,A6,A7) 0b##A7##A6##A5##A4##A3##A2##A1##A0

#define concate(PA7,PA6,PA5,PA4,PA3,PA2,PA1,PA0) conc_helper(PA7,PA6,PA5,PA4,PA3,PA2,PA1,PA0)

#endif /* STD_FUNCTIONS_H_ */