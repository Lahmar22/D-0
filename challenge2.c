#include <stdio.h>

int main(){
    float tmpr ;
    float Kelvin =0.0;

    printf("entrez la température en Celsius");
    scanf("%f",&tmpr);

    Kelvin = tmpr + 273.15 ;

    printf("la température en Celsius et la transforme en Kelvin est : %.2f",Kelvin);


}

