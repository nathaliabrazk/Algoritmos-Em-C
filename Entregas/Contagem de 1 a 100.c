//Elabore um programa que realize a contagem de 1 atÃ© 100 e nos mÃºltiplos de 5 imprima apenas M5, caso o nÃºmero seja mÃºltiplo de 10 imprima apenas M10 na tela, caso seja mÃºltiplo de 15 imprima apenas M15 e caso nÃ£o seja mÃºltiplo de 5,10 ou 15 imprima o valor atual da variÃ¡vel.
#include<stdio.h>
int main(){
int i=0;
//primeira parte M5
    for(i=1;i<=100;i++){
    if(i%5==0){
    printf("M5\n");
 }else{
    printf("%d\n",i);            
}
        //M10
        if(i%10==0){
        printf("M10\n");
        }else{
        printf("%d\n", i);
        }
            //M15
            if(i%15==0){
            printf("M15\n");
            }
            for(i=1;i<=100;i++){
            if(i%15==0){
            printf("M15\n");
            }else{
            printf("%d", i);
                }


  }

  }
}
