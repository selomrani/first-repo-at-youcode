#include <stdio.h>

int main (void) {

    int montant , bill20,bill10,bill5,bill1;

    printf("Entrer un montant en $ : ");
    scanf("%d",&montant);

    bill20 = montant / 20 ;
    bill10 = montant /10 ;
    bill5 = montant /5 ;
    bill1 = montant /1 ;


    printf ("%d contient %d billiets de $20\n",montant,bill20);
    printf ("%d contient %d billiets de $10\n",montant,bill10);
    printf ("%d contient %d billiets de $5\n",montant,bill5);
    printf ("%d contient %d billiets de $1\n",montant,bill1);






    return 0;
}