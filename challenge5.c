#include <stdio.h>
int main(){
    
    int base,exposant;
    int result=1;

    printf("entrez un number sbase : ");
    scanf("%d",&base);
    printf("entrez un number exposant : ");
    scanf("%d",&exposant);

    for (int i =0; i<exposant; i++) {
        result = result * base;
    
    }
    printf("result de %d ^ %d = %d",base,exposant,result);
    
   

}

