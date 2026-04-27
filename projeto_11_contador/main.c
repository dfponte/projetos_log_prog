

#include <stdio.h>
#include <stdlib.h>

//Cabeçalhos das funções
void contador(void);
double a_quadrado(double);

int main(){
    double lado=0;
    contador();
    contador();
    contador();

    printf("Digite o lado do quadrado\n");
    scanf("%lf",&lado);
    
    double area_q = a_quadrado(lado);
    printf("Area do quadrado e igual a %f",area_q);
    return 0;
}

//----Função contador----------------------------
void contador(void){
    static int valor_atual =0;
    valor_atual++;
    printf("Valor contado %d\n",valor_atual);
}

//----Função área do quadrado

double a_quadrado(double lado){

    double area = 0;
    area = lado*lado;
    return area;
}

