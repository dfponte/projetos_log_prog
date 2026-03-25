
#include <stdio.h>
#include <stdlib.h>

int main(){
     int y = 0;

     for(int i=1;i<=100;i++){

         printf("Contando de 1-100 - valor %d\n",i);

      //Valores pares ....
      if(i%2==0){
          printf("----Esse valor e par---- %d\n",i);
      }
      // Cálculo do valor de y para i>=20 e i<=30
      if(i>=20 && i<=30){
          y = i*i+5*i-6;
          printf("y =  %d\n",y);
      }
     
    } // Fim do for
    int senha = 0;
    int valor1=0;
    int valor2=0;
    while(senha!= 1){
      printf("Digite valor1\n");
      scanf("%d",&valor1);
      printf("Digite valor2\n");
      scanf("%d",&valor2);
      printf("Resultado da soma %d\n",valor1+valor2);

      printf("Digite 1 para encerrar a operacao\n");
      scanf("%d",&senha);
    }
   
    return 0;
}