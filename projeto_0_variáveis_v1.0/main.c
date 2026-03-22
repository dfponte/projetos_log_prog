
#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1 = 10;
    int valor2 = 20;
    int soma = 0;
    int d = 0;
    int valor_desconto;

     printf("Digite o valor1\n");
     scanf("%d",&valor1);

     printf("Digite o valor2\n");
     scanf("%d",&valor2);
     soma = valor1 + valor2;

     printf("Digite o valor do desconto\n");
     scanf("%d",&d);
     valor_desconto = soma - ((soma*d)/100);
     
     printf("Novo preco = %d\n",valor_desconto);
    
     return 0;
}