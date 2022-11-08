//REQUISITOS
//cadastro de apenas um usuario
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
fgets(nome,50,stdin);//usado para armazenar nome composto

//idade
do{
printf("\nInforme a idade: ");
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
do{
    printf("\nInforme a altura: ");
    scanf("%f",&altura);
    if(altura>0.10){
        printf("Altura valida!(maior que 10cm)\n");
    }else{
        printf("Altura invalida!(menor que 10cm\n");
    }
    if(altura<3.0){
        printf("Altura valida!(menor que 3m)\n");
    }else{
        printf("Altura invalida!(maior que 3m)\n");
    }
    }while(altura<0.10||altura>3.0);
    fflush(stdin);
    //genero
    do{
        printf("\nInforme o genero(f,m,p): ");
        scanf("%c",&genero);
        fflush(stdin);
        if(genero!='f'&& genero!='m'&& genero!='p'){
            printf("Genero invalido!\n");
        }
    }while(genero!='f'&& genero!='m' && genero!='p');
    printf("Genero valido!\n");

    //impressao de dados 
    printf("\n----------DADOS INFORMADOS----------\n\n");
    printf("Nome:%s",nome);
    printf("Idade:%d\n",idade);
    printf("Altura:%.2f\n",altura);
    printf("Genero:%c\n",genero);

}//fim da main





