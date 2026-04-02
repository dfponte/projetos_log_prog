
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
        case '+':printf("Voce escolheu realizar uma soma\n");
        printf("Entao vamos la... \n");
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

         int ch;
         printf("Digite 1: comercial- digite 2: deposito - digite 3: atendente \n");
         scanf("%d",&ch);
         scanf("%c",&c);

         switch (ch)
         {
         case 1: printf("Vc está no comercial");
            /* code */
            break;
         case 2: printf("Vc está no deposito");
            /* code */
            break;
         case 3: printf("Diga o que deseja...");
            /* code */
            break;
         default:printf("Opcao invalida...");
            break;
         }


    return 0;
   
}