#include <stdio.h>

int main(){
    float distance ;
    float Yards =0.0;

    printf("entrez la distance en kilomètres");
    scanf("%f",&distance);

    Yards = distance * 1093.61 ;

    printf("la distance en kilomètres transforme en yards est : %.2f",Yards);


}
