#include <stdio.h>
#include <stdbool.h>

void celsius_to_fahrenheit(){   /*Celsius to fahrenheit*/
    float c;
    printf("Enter Celsius value: ");
    scanf("%f",&c);
    float result=(c*9/5+32);
    printf("\n%.2f Celsius degrees = %.2f Fahrenheit degrees.",c, result);

}
void kelvin_celsius(){  /*Kelvin to celsius*/
    float k;
    printf("Enter kelvin value(K): ");
    scanf("%f",&k);
    float result=(k-273.15);
    printf("\n%.2f kelvin = %.2f celsius degrees.", k, result);
}
void fahrenheit_kelvin(){ /*Fahrenheit to kelvin*/
    float f;
    printf("Enter Fahrenheit value(f): ");
    scanf("%f",&f);
    float result = ((f-32)*5/9+273.15);
    printf("\n%.2f Fahrenheit = %.2f Kelvin degrees.", f, result);
}
void mph_kmh(){         /*miles per to kilometer per hour*/
    float k;
    printf("Enter speed in mph: ");
    scanf("%f",&k);
    float result=(k*1.609344);
    printf("\n%.2f mph = %.2f kmh.",k , result);
}
void kmh_knots(){
    float k;
    printf("Enter speed in kmh: ");
    scanf("%f",&k);
    float result=(k*1.852);
    printf("\n%.2f kmh = %.2f knots.",k , result);
}
void inches_to_cm(){      /*Inches to cm*/
    float i;
    printf("Enter inches value(in): ");
    scanf("%f",&i);
    float result=(i*2.54);
    printf("\n%.2f inches = %.2f cm.", i, result);
}
void ft_to_m(){   /*Feet to meters*/
    float f;
    printf("Enter feet value(ft): ");
    scanf("%f",&f);
    float result=(f*0.3048);
    printf("\n%.2f feet = %.2f meters.", f, result);
}
void yard_to_meters(){   /*Yards to meters*/
    float y;
    printf("Enter yard value: ");
    scanf("%f",&y);
    float result=(y*0.9144);
    printf("\n%.2f yards = %.2f meters.", y, result);
}
void miles_to_km(){  /*Miles to kilometers*/
    float m;
    printf("Enter mile value(mi): ");
    scanf("%f",&m);
    float result=(m*1.6093);
    printf("\n%.2f miles = %.2f kilometers.", m, result);
}
void fathom_m(){ /*fathoms to meters*/
    float f;
    printf("Enter fathom value(ftm): ");
    scanf("%f",&f);
    float result=(f*1.8288);
    printf("\n%.2f fathoms = %.2f meters.", f, result);
}
void nm_km(){ /*nautical miles to kilometers*/
    float n;
    printf("Enter nautical mile value(nm): ");
    scanf("%f",&n);
    float result=(n*1.85200);
    printf("\n%.2f nautical miles = %.2f kilometers.", n, result);
}
void fur_to_m(){ /*Furlongs to meters*/
    float f;
    printf("Enter furlong value(fur): ");
    scanf("%f",&f);
    float result=(f*201.16800);
    printf("\n%.2f furlongs = %.2f meters.", f, result);
}
void grain_gram(){ /*Grains to grams*/
    float g;
    printf("Enter grain value(gr): ");
    scanf("%f",&g);
    float result=(g*0.06479891);
    printf("\n%.2f grain = %.2f grams.", g, result);
}
void ounce_gram(){ /*Ounces to grams*/
    float o;
    printf("Enter ounce value(oz): ");
    scanf("%f",&o);
    float result=(o*28.3495231);
    printf("\n%.2f ounces = %.2f grams.", o, result);
}
void pound_kilo(){ /*Pounds to kilograms*/
    float p;
    printf("Enter pound value(lbs): ");
    scanf("%f",&p);
    float result=(p*0.45359237);
    printf("\n%.2f pounds = %.2f kilos.", p, result);
}
void stone_kilo(){ /*Stones to kilograms*/
    float s;
    printf("Enter stone value(st): ");
    scanf("%f",&s);
    float result=(s*6.35029318);
    printf("\n%.2f stones = %.2f kilos.", s, result);
}
void quarter_kilo(){ /*Quarters to kilograms*/
    float q;
    printf("Enter quarter value(qtr): ");
    scanf("%f",&q);
    float result=(q*12.70058636);
    printf("\n%.2f stones = %.2f kilos.", q, result);
}
void ounces_deciliter(){ /*Ounces to deciliters*/
    float o;
    printf("Enter fluid-ounces value(fl oz): ");
    scanf("%f",&o);
    float result=(o*0.295735296);
    printf("\n%.2f fluid ounces = %.2f deciliters.", o, result);
}
void gill_deciliter(){ /*Gills to deciliters*/
    float g;
    printf("Enter gill value(gi): ");
    scanf("%f",&g);
    float result=(g*1.18294118);
    printf("\n%.2f gills = %.2f deciliters.", g, result);
}
void pint_deciliter(){ /*Pints to deciliters*/
    float p;
    printf("Enter pint value(pt): ");
    scanf("%f",&p);
    float result=(p*4.73176473);
    printf("\n%.2f pints = %.2f deciliters.", p, result);
}
void qt_lit(){ /*Quarts to liters*/
    float q;
    printf("Enter quart value(qt): ");
    scanf("%f",&q);
    float result=(q*0.946352946);
    printf("\n%.2f quarts = %.2f liters.", q, result);
}
void gallon_lit(){ /*Gallons to liters*/
    float g;
    printf("Enter gallon value(gal): ");
    scanf("%f",&g);
    float result=(g*3.78541178);
    printf("\n%.2f gallons = %.2f liters.", g, result);
}
void cup_mil(){
    float c;
    printf("Enter US-cups value: ");
    scanf("%f",&c);
    float result=(c*240);
    printf("\n%.2f cups = %.2f mililiters.", c, result);
}
void tbsp_mil(){
    float t;
    printf("Enter tablespoon value: ");
    scanf("%f",&t);
    float result=(t*5);
    printf("\n%.2f tablespoons = %.2f mililiters.", t, result);
}
void weight_menu(){                   /*Weight menu*/
    printf("\n***Weight/Mass menu***\n");
    printf("Choose between 1-6.\n");
    printf("1. Grain-->Gram\n");
    printf("2. Ounce-->Gram\n");
    printf("3. Pound-->Kilo\n");
    printf("4. Stone-->Kilo\n");
    printf("5. Quarter-->Kilo\n");
    printf("6. Exit to main menu\n");
}
void volume_menu(){                     /*Volume menu*/
    printf("\n***Volume menu***\n");
    printf("Choose between 1-6\n");
    printf("1. Fluid ounces-->Deciliter\n");
    printf("2. Gill-->Deciliter\n");
    printf("3. Pint-->Deciliter\n");
    printf("4. Quart-->Liter\n");
    printf("5. Gallon-->Liter\n");
    printf("6. US cup-->mililiter\n");
    printf("7. Tablespoon-->mililiter\n");
    printf("8. Exit to main menu\n");

}
void dist_menu(){                               /*Distance menu*/
    printf("\n***Distance/Length menu***\n");
    printf("Choose between 1-8\n");
    printf("1. Inches-->Centimeter\n");
    printf("2. Feet-->Centimeter\n");
    printf("3. Yard-->Meter\n");
    printf("4. Furlong-->Meter\n");
    printf("5. Mile-->Kilometer\n");
    printf("---Maritime units below---\n");
    printf("6. Fathom-->Meter\n");
    printf("7. Nautical mile-->Kilometer\n");
    printf("8. Exit to main menu\n");
}
void temp_menu(){                        /*Temp menu*/
    printf("\n***Temperature menu***\n");
    printf("Choose between 1-4\n");
    printf("1. Celsius-->Fahrenheit\n");
    printf("2. Kelvin-->Celsius\n");
    printf("3. Fahrenheit-->Kelvin\n");
    printf("4. Exit to main menu\n");
}
void main_menu(){                     /*Main menu*/
    printf("\n***Main menu***\n");
    printf("Choose between 1-6\n");
    printf("1. Mass/Weight\n");
    printf("2. Volume\n");
    printf("3. Distance/Length\n");
    printf("4. Temperature\n");
    printf("5. Speeds\n");
    printf("6. Exit\n");
}
void speed_menu(){
    printf("\n***Speed menu***\n");
    printf("Choose between 1-3\n");
    printf("1. mph-->kmh\n");
    printf("2. kmh-->knots\n");
    printf("3. Exit to main menu\n");
}
