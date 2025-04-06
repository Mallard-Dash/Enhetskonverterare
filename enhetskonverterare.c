/*Ett konverteringsprogram*/
#include <stdio.h>

void celsius_to_fahrenheit(){   /*Här beräknas celsius till fahrenheit*/
    float c;
    printf("Ange temperatur i celsius: ");
    scanf("%f",&c);
    float result=(c*9/5+32);
    printf("\n%.2f grader celsius är %.2f fahrenheit.",c, result);

}
void mph_kmh(){         /*miles per hour beräknas till kilometer i timmen*/
    float k;
    printf("Ange hastighet i mph: ");
    scanf("%f",&k);
    float result=(k*1.609344);
    printf("\n%.2f mph är %.2f kmh.",k , result);
}
void inches_to_cm(){      /*Inches beräknas till cm*/
    float i;
    printf("Ange inches: ");
    scanf("%f",&i);
    float result=(i*2.54);
    printf("\n%.2f inches är %.2f cm.", i, result);
}
void ft_to_m(){   /*Här beräknas fot till meter*/
    float f;
    printf("Ange fot: ");
    scanf("%f",&f);
    float result=(f*0.3048);
    printf("\n%.2f fot är %.2f meter.", f, result);
}
void yard_to_meters(){   /*Här beräknas yards till meter*/
    float y;
    printf("Ange yards: ");
    scanf("%f",&y);
    float result=(y*0.9144);
    printf("\n%.2f yards är %.2f meter.", y, result);
}
void miles_to_km(){  /*Här beräknas miles till kilometer*/
    float m;
    printf("Ange miles: ");
    scanf("%f",&m);
    float result=(m*1.6093);
    printf("\n%.2f miles är %.2f kilometer.", m, result);
}
void visa_meny(){                   /*Huvudmenyn*/
    printf("\n***HUVUDMENY***\n");
    printf("Välj mellan 1-7.\n");
    printf("1. Celsius-->Fahrenheit\n");
    printf("2. mph-->kmh\n");
    printf("3. inches-->centimeter\n");
    printf("4. fot-->meter\n");
    printf("5. yard-->meter\n");
    printf("6. miles-->kilometer\n");
    printf("7. Avsluta\n");
}

int main(){

    int val;

    while(1){
        visa_meny();
        scanf(" %d",&val);

        switch(val){
            case 1:
            celsius_to_fahrenheit();
            break;

            case 2:
            mph_kmh();
            break;

            case 3:
            inches_to_cm();
            break;

            case 4:
            ft_to_m();
            break;

            case 5:
            yard_to_meters();
            break;

            case 6:
            miles_to_km();
            break;
            
            case 7:
            printf("Avslutar programmet, välkommen åter!...\n");
            return 0;
            default:
            printf("Ogiltligt val, försök igen!");
        }

    }

    return 0;
}