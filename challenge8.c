#include <stdio.h>
#include <math.h> 

int main(){
    float a ;
    float b;
    float c;
    float moyenne_gmtrq;
   

    printf("entrez la valeur de A :");
    scanf("%f",&a);
    printf("entrez la valeur de B :");
    scanf("%f",&b);
    printf("entrez la valeur de C :");
    scanf("%f",&c);

    moyenne_gmtrq = pow(a * b * c, 1.0 / 3.0);

    printf("La moyenne géométrique est : %.2f\n", moyenne_gmtrq);

  
}