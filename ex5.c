#include <stdio.h>
#include <math.h>
int main(void){

    int x ;
    float poly ;
    printf("Entrer un valeur do X : ");
    scanf("%d", &x);
    poly = 3 * pow (x , 5) + 2 * pow ( x ,  4) -5 * pow(x,3)- pow(x,3 ) + 7 * x - 6 ;
    printf("Le polynome est: %.2f\n", poly);
    


    return 0;
}