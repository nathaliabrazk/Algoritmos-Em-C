/*Escreva um programa que calcule a media aritmetica de tres numeros digitados pelo usuario*/
int main(){
    int n1,n2,n3,resultado;
    printf("Informe o primeiro numero:");
    scanf("%d",&n1);
    printf("Informe o segundo numero:");
    scanf("%d",&n2);
    printf("Informe o terceiro numero:");
    scanf("%d",&n3);

    resultado=(n1+n2+n3)/3;
    printf("Media Aritmetica:%d",resultado);
}