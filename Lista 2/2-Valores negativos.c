/*Escreva um programa que leia cinco valores e conte quantos desses valores são
negativos, mostrando essa informação no final.
*/
int main(){
    int i,valor,count=0;
    for(i=0;i<5;i++){
    printf("Informe o valor:");
    scanf("%d",&valor);
        if(valor<0){
            count++;
        }
    }
       printf("Quantidades de numeros negativos:%d",count);
}