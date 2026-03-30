
#include <stdio.h>
#include <stdlib.h>

int main(){

   int valor1=0;
   int valor2=0;
   int var_aux = 0;
    
   printf("Digite valor1\n");
   scanf("%d",&valor1);

   printf("Digite valor2\n");
   scanf("%d",&valor2);

   if(valor1>valor2){
    printf("Valor1 maior que valor2\n");
    printf("Valor1 = %d > valor2 = %d\n",valor1,valor2);
   }else if(valor1<valor2){
     var_aux = valor1;
     valor1 = valor2;
     valor2= var_aux;
     printf("Valor1 maior que valor 2 modificado\n");
     printf("Valor1 = %d > valor2 = %d\n",valor1,valor2);
   }else{
      printf("Valor2 igual a valor1\n");
       printf("Valor2 = %d = valor1 = %d\n",valor2,valor1);
   }

    return 0;
}