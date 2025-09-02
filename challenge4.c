#include <stdio.h>

int main(){
    float vitesse ;
    float seconde =0.0;

    printf("entrez la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f",&vitesse);

    seconde = vitesse * 0.27778 ;

    printf("la vitesse en kilomètres par heure (km/h) transforme en mètres par seconde (m/s) est : %.2f",seconde);


}