#include <stdio.h>

int main(){
    int n ; 
    int fac=1;

    printf("entrez un number svp : ");
    scanf("%d",&n);

    if (n !=0) {
        for (int i =1; i<=n; i++) {
            fac = fac*i;
        }
        printf("la factorielle de  %d est : %d",n,fac);
    
    }else {
        printf("nomber est null");
    
    }
    
    
    

}

