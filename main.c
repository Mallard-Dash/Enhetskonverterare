#include <stdio.h>
#include <stdbool.h>
#include "def.h"


int main(){

    int val;
    bool program=true;

    while(program){  /*Main menu bool*/
        main_menu();
        scanf(" %d",&val);

        switch(val){ /*Sub-menu 1*/
            case 1:{
            bool submeny1=true;
            while (submeny1){
                int choice;
                weight_menu();
                scanf(" %d",&choice);
                switch(choice){
                    case 1:
                    grain_gram();
                    break;
                    case 2:
                    ounce_gram();
                    break;
                    case 3:
                    pound_kilo();
                    break;
                    case 4:
                    stone_kilo();
                    break;
                    case 5:
                    quarter_kilo();
                    break;
                    case 6:
                    submeny1=false;
                    break;
                    default:
                    printf("Wrong input. Enter a number between 1-6!");
                }
            }
            break;
        

            case 2:
            bool submenu2=true; /*Sub-menu 2*/
            while (submenu2){
                int choice2;
                volume_menu();
                scanf(" %d",&choice2);
                switch(choice2){
                    case 1:
                    ounces_deciliter();
                    break;
                    case 2:
                    gill_deciliter();
                    break;
                    case 3:
                    pint_deciliter();
                    break;
                    case 4:
                    qt_lit();
                    break;
                    case 5:
                    gallon_lit();
                    break;
                    case 6:
                    cup_mil();
                    break;
                    case 7:
                    tbsp_mil();
                    break;
                    case 8:
                    submenu2=false;
                    break;
                    default:
                    printf("Wrong input. Enter a number between 1-6!");
                }
            }
            break;
            case 3: /*Sub-menu 3*/
            bool submenu3=true;
            while (submenu3){
                int choice3;
                dist_menu();
                scanf(" %d",&choice3);
                switch(choice3){
                    case 1:
                    inches_to_cm();
                    break;
                    case 2:
                    ft_to_m();
                    break;
                    case 3:
                    yard_to_meters();
                    break;
                    case 4:
                    fur_to_m();
                    break;
                    case 5:
                    miles_to_km();
                    break;
                    case 6:
                    fathom_m();
                    break;
                    case 7:
                    nm_km();
                    break;
                    case 8:
                    submenu3=false;
                    break;
                    default:
                    printf("Wrong input. Enter a number between 1-8!");
                }
            }  
            break;
            case 4: /*Sub-menu 4*/
            bool submenu4=true;
            while (submenu4){
                int choice4;
                temp_menu();
                scanf(" %d",&choice4);
                switch(choice4){
                    case 1:
                    celsius_to_fahrenheit();
                    break;
                    case 2:
                    kelvin_celsius();
                    break;
                    case 3:
                    fahrenheit_kelvin();
                    break;
                    case 4:
                    submenu4=false;
                    break;
                    default:
                    printf("Wrong input. Enter a number between 1-4!");
                }
            }
            break;
            case 5: /*Sub-menu 5*/
            bool submenu5=true;
            while (submenu5){
                int choice5;
                speed_menu();
                scanf(" %d",&choice5);
                switch(choice5){
                    case 1:
                    mph_kmh();
                    break;
                    case 2:
                    kmh_knots();
                    break;
                    case 3:
                    submenu5=false;
                    break;
                    default:
                    printf("Wrong input. Enter a number between 1-3!");
                }
            }
            break;    
        }
            case 6:
            printf("Shutting down...\n");
            return 0;
            default:
            printf("Wrong input. Enter a number between 1-5!");
        }

    }

    return 0;
}
