#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    int op;
    printf("entre la valeur: ");
    scanf("%f",&x);
    printf("entre la valeur: ");
    scanf("%f",&y);
    printf("operation = l'addition1,la soustraction;2,la multiplication;3,la division.4");
    scanf("%d",&op);
    if(op == 1){

    float z = x + y;
    printf("resultat %.2f", z);
     }
    if(op== 2){

    float z = x - y;
    printf("resultat %.2f", z);
}
    if(op== 3){
    float z = x*y;
    printf("resultat %.2f", z);
}
    if(op== 4){
    float z = x/y;
    printf("resutltat %.2f", z);
    }

    return 0;
}
