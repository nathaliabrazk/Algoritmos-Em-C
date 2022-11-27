/* Escreva um programa que calcule a média dos números digitados pelo usuário, se
eles forem pares. O programa deve terminar a leitura se o usuário digitar zero.*/
int main(){
int numero,qNumero,media;
do{
    printf("Digite o numero:");
    scanf("%d",&numero);
    qNumero++;
    if(numero%2==0){
        media=numero/qNumero;
        printf("Media:%d",media);
    }
}while(numero>0);
}