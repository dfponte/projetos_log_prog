#include <stdio.h>
#include <stdlib.h>

void x(void);

int novo_preco(int,int);

int main(){

    x();

    int preco_atual =0;
    int desconto =0;
    
    printf("Digite preco\n");
    scanf("%d",&preco_atual);
    
    printf("Digite o desconto\n");
    scanf("%d",&desconto);

    int novo_p =  novo_preco(preco_atual,desconto);
     printf("Novo preco e %d\n",novo_p);
    return 0;
}

void x(void){
  
    for(int i=0;i<5;i++){
       printf("Daniel\n");
    }
}p

int novo_preco(int p,int d){
   int n_preco = p - (p*d/100);
   return n_preco;
}
