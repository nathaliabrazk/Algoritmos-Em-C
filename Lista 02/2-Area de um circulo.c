//algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x    raio2).
#include<stdio.h>
int main(){
    //declaracao de variaveis
    int area, raio;//%d=int
    //definicao de valores
    printf("Informe o valor do raio: ");
    scanf("%d", &raio);
    area=3.14*raio*raio;
    //impressao de resultado
    printf("Area: %d",&area);

return 0;
}