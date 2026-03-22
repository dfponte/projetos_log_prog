
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 1;
    int y = 2;
    int rest = 0;
    int z = 0;
    double div = (double)x/y;
    printf("Valor da divisao %f \n",div);
    rest = 3%2;
    printf("Valor do resto %d \n",rest);

    z++;
    z++;
    z--;
    printf("Valor z %d \n",z);

    int logica = (y<=2);
    printf("logica (==) %d \n",logica);

    logica = (y==4);
    printf("logica (==) %d \n",logica);

    if(y!=2){
        printf("Valor de y = 2");
    }

    printf("Digite um valor para y\n");
    scanf("%d",&y);
    if(y>5){
        printf("Valor de y maior que 5");
    }else{
         printf("Valor de y menor que 5");
    }

    return 0;
}