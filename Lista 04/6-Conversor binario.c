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

    for(numero=0;numero%2==0;numero++){
    if(numero %2==1){    
        printf("Valor valido!\n");
    }else{
        printf("Valor invalido, digite um valor decimal:");
        scanf("%d",&numero);
       
    }
    }
    binario(numero);

    return 0;
}
