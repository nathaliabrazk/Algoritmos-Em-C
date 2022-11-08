//REQUISITOS
//nome(sem validacao)
//idade(0-200)
//altura(10cm -3m)
//genero(m-f-p)
#include<stdio.h>
int main(){
//declaracao de variaveis 
char nome[50];//%s
int idade;//%d
float altura;//%f
char genero;//%c

//nome
printf("Informe o nome: ");
scanf("%s",&nome);

//idade
do{
printf("Informe a idade: ");
scanf("%d",&idade);
if(idade>=0){
    printf("Idade valida!(maior que 0)\n");
}else{
    printf("Idade invalida!(menor que 0)\n");
}
if(idade<200){
    printf("Idade valida!(menor que 200)\n");
}else{
    printf("Idade invalida!(maior que 200)\n");
}
} while (idade<0||idade>200);

//altura




}//fim da main
