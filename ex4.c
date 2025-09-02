#include <stdio.h>

int main (void) {

    float montant , tax , total ;

    printf("Entrer le montant en $ : ");
    scanf("%f", &montant);
    tax = montant * 0.05 ;
    total = montant + tax ; 
    printf("Le total est: $%.2f\n", total);
    printf("La taxe est: $%.2f\n", tax);


}