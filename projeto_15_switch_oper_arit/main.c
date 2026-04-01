
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char c;
    char oper;
    int valor1;
    int valor2;
    
    printf("Digite o valor1 \n");
    scanf("%d",&valor1);
    scanf("%c",&c);
    printf("Digite o valor2 \n");
    scanf("%d",&valor2);
    scanf("%c",&c);
    printf("Digite operacao desejada +, - ou * \n");
    scanf("%c",&oper);
    scanf("%c",&c);
   
     switch(oper){


        case '+':printf("Soma \n");
        printf("Valor da soma = %d \n",valor1+valor2);
        break;
        case '-':printf("Subtracao\n");
        printf("Valor da subtracao %d \n",valor1-valor2);
        break;
        case '*':printf("Multiplicacao\n");
        printf("Valor do produto %d \n",valor1*valor2);
        break;
        default:printf("Oper inexitente");
        }

    

    return 0;
   
}