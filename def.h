#ifndef DEF_H
#define DEF_H

#include <stdio.h>
#include <stdbool.h>

// Temperatur
void celsius_to_fahrenheit();
void kelvin_celsius();
void fahrenheit_kelvin();
void temp_menu();

// Vikt
void grain_gram();
void ounce_gram();
void pound_kilo();
void stone_kilo();
void quarter_kilo();
void weight_menu();

// Volym
void ounces_deciliter();
void gill_deciliter();
void pint_deciliter();
void qt_lit();
void gallon_lit();
void cup_mil();
void tbsp_mil();
void volume_menu();

// Längd
void inches_to_cm();
void ft_to_m();
void yard_to_meters();
void miles_to_km();
void fathom_m();
void nm_km();
void fur_to_m();
void dist_menu();

// Hastighet
void mph_kmh();
void kmh_knots();
void speed_menu();

// Huvudmeny
void main_menu();

#endif
