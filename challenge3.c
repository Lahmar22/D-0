#include <stdio.h>

int main(){
    int n;
    int somme = 0;

    printf("entrez un number svp : ");
    scanf("%d",&n);

    for (int i =0; i<=n; i++) {
        somme = somme+i;
    
    }
    printf("la somme de %d est %d ",n,somme);

}

