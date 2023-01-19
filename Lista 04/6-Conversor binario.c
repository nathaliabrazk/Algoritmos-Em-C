/*Programa que faz a conversao de um numero decimal para binario*/
#include<stdio.h>
#include<math.h>

void binario(int numero){
if(numero==0){
    printf("%d",numero);
}else{
    binario(numero/2);
    printf("%d",numero % 2);
}
}
int main(){
    int numero;
    printf("Informe um valor decimal:");
    scanf("%d",&numero);

     binario(numero);

    return 0;
    }
    
   

  
