#include <stdio.h>

int main(){
    float a ;
    float b;
    float c;
    float moyenne;
   

    printf("entrez la valeur de A :");
    scanf("%f",&a);
    printf("entrez la valeur de B :");
    scanf("%f",&b);
    printf("entrez la valeur de C :");
    scanf("%f",&c);

    moyenne = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    printf("La moyenne ponderee est : %.2f\n", moyenne);

  
}
