
#include <stdio.h>
#include <stdlib.h>

int main(){

   
    unsigned char regA = 0;
    regA = (1<<0);
    printf("Valor armazenado regA = %X\n",regA);
    
     regA = regA |(1<<5);
     printf("Valor armazenado regA = %X\n",regA);
     
     regA = regA|(1<<7);
     printf("Valor armazenado regA = %X\n",regA);
     
    return 0;
}