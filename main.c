#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Fatorial\n");

    int fat, n;
    printf("Digite um numero para calcular seu fatorial: \n");
    scanf("%d",&n);

    for(fat=1; n>1; n=n-1){
        fat = fat * n;
        printf(" %d * %d = ",fat,n-1);
    }
    printf("\n Seu fatorial eh: %d",fat);
    return 0;
}
