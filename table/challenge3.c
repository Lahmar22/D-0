#include <stdio.h>

int main(){
    int tab[5];
    int max =0;

    for (int i =0; i<5; i++) {
        printf("entrez les numbres svp : ");
        scanf("%d",&tab[i]);
    
    }

    for (int i =0; i<=5; i++) {
        if(tab[i]>max){
            max=tab[i];
        }
        
        
    
    }
    printf("le max de tableau est : %d \n", max);


        

    

}

