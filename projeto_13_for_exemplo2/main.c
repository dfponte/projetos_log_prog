
#include <stdio.h>
#include <stdlib.h>

int main(){
     int y =0;

    // Projeto for equação 
    for(int x=0;x<=100;x++){
         y= x*x-25*x+100;
         if(y==0){
           printf("Para x = %d -> y = %d\n",x,y);
         }

    }

    //Projeto com operadores de deslocamento e binário
    unsigned char regA = 0;
    regA = (1<<0);
    printf("Valor armazenado regA = %X\n",regA);
    
     regA = regA |(1<<5);
     printf("Valor armazenado regA = %X\n",regA);
     
     regA = regA|(1<<7);
     printf("Valor armazenado regA = %X\n",regA);
     
    return 0;
}