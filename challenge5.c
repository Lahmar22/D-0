#include <stdio.h>

int main(){
    float temperature ;

    printf("entrez la température en Celsius : ");
    scanf("%f",&temperature);
    if (temperature<0) {
        printf("Solide");
    
    }else if (temperature<100) {
        printf("Liquide");
    
    }else {
        printf("Gaz");
    
    }


    


}
