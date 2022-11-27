/*Escreva um programa que receba dez números inteiros do teclado e diga quantos são
pares e quantos são ímpares.*/
int main(){
    int numero,i,numeroPar,numeroImpar;
    for(i=0;i<10;i++){
    printf("Digite o numero:");
    scanf("%d",&numero);
    
    if(numero%2==0){
        numeroPar++;
    }
    if(numero%2==1){
        numeroImpar+=1;
    }
    
    }
    printf("Quantidade de numeros pares:%d\n",numeroPar);
    printf("Quantidade de numeros impares:%d\n",numeroImpar);
}