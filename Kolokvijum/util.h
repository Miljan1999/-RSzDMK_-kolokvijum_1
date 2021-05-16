/**
* @file util.h
* @brief H fajl util
* @author Miljan Eric
* @date 16-05-2021
* @version 1.0
*/
#ifndef UTIL_H_
#define UTIL_H_

///Potrebne biblioteke
#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include "../pin/pin.h"
#include "../timer/timer.h"
#include "../usart/usart.h"
#include <stdint.h>
#include <string.h>

/**
* Funkcija Sort treba da sortira niz array duzine array_length, na nacin
* odabran parametrom mode. Parametar mode moze imati vrednost konstanti UP
* i DOWN definisanih pomocu makroa. Ukoliko mode ima vrednost UP, sortira
* niz od najvecseg do najmanjeg elementa, dok u slucaju vrednosti DOWN sortira
* niz od najmanjeg do najveceg elementa.
* @param array niz
* @param array length duzina niza
* @param mode mod, nacin rada
* @return nema povratne vrijednost
*/

void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
*  Funkcija Check vrsi proveru da li je uneti niz aritmeticki
* @param array je niz
* @return vrednosti TRUE ili FALSE, definisane kao makro
* konstante za vrednosti 1 i 0.
*/

int8_t Check(int16_t *array);

/**
* Funkcija izmjeni da menja mesta u sortu
* @param xp- prvi clan
* @param yp- drugi clan
* @return nema povratnu vrednost.
*/
void izmjeni(int *xp, int *yp);




#endif /* UTIL_H_ */
