#include <stdio.h>
int main(){
    char nom[40];
    char prenom[40];
    int age;
    char sexe[40];
    char adrMail[200];
    

    printf("entrez le nom : ");
    scanf("%s",nom);
    printf("entrez le prenom : ");
    scanf("%s",prenom);
    printf("entrez l' age : ");
    scanf("%d",&age);
    printf("entrez le sexe : ");
    scanf("%s",sexe);
    printf("entrez adresse email : ");
    scanf("%s",adrMail);

    printf("nom : %s , prenom : %s , age : %d , sexe : %s , adresse email : %s", nom,prenom,age,sexe,adrMail);


}

