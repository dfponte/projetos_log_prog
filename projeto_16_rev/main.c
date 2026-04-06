#include <stdio.h>
#include <stdlib.h>

int total_votos = 5;
int voto;
int candid1=0,candid2=0;
int main(){

   for(int i=1;i<=total_votos;i++){
       
       printf("-----------Secao de Votacao IFPI-----------\n");
       printf("Digite: 1 para candidato A e 2 para B\n");
       scanf("%d",&voto);
       
       if(voto==1){
          printf("vc votou no candidato A %d \n",voto);
          candid1++;
       }
       if(voto==2){
          printf("vc votou no candidato B %d \n",voto);
          candid2++;
       }
   }

   printf("Candidato A %d votos\n",candid1);
   printf("Candidato B %d votos\n",candid2);

   if(candid1>=candid2){
      printf("Candidato A Eleito\n");
   }else{
      printf("Candidato B Eleito\n");
   }
    return 0;
}