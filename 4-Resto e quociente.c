//algoritmo que a partir da leitura de dois números forneça o resto e o
//quociente da divisão do primeiro pelo segundo número.
#include<stdio.h>
int main(){
//declaracao de variaveis
int v1, v2, resto, divisao;//%d=int
//definicao de valores
printf("Informe o primeiro numero: ");
scanf("%d", &v1);
printf("Informe o segundo numero: ");
scanf("%d", &v2);
//operacoes para o resultado
divisao=v1/v2;
resto= v1%v2;
//impressao de resultados
printf("Divisao: %d\nResto: %d", divisao, resto);

return 0;
}