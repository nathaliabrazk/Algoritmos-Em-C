/*Escreva um programa que calcule o consumo medio de um automovel;
sao fornecidas a distancia total percorrida e o total de combustivel
gasto*/
int main(){
    int consumo,distancia,combustivel;

    printf("Digite a distancia percorrida:");
    scanf("%d",&distancia);

    printf("Informe o total de combustivel gasto:");
    scanf("%d",&combustivel);

    consumo=distancia/combustivel;
    printf("Consumo medio:%d",consumo);
}