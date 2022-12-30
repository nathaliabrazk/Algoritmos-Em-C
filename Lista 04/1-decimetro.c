/*Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros*/
#include<stdio.h>
int main(){
int metro,decimetro,centimetro,milimetro;

printf("Informe o valor em metros:");
scanf("%d",&metro);

centimetro = metro * 100;
decimetro = metro * 0.10000;
milimetro = metro * 0.001000;

printf("Centimetros:%d\nDecimetros:%d\nMilimetros:%d",&centimetro,&decimetro,&milimetro);

}