#include    <stdio.h>
#include    <math.h>
int main (void){
    int rayon ;
    const double pi = 3.14159265359;
    float volume = 0;

    printf("Entrer le rayon de la sphere: ");
    scanf("%d", &rayon);

    volume = (4.0/3) * pi * pow(rayon, 3);
    printf("Le volume de la sphere de rayon %d est: %.2f\n",    rayon, volume); 



    return 0;
}