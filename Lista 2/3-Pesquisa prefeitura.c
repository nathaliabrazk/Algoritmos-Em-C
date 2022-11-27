/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00. O final da leitura de dados se
dará com a entrada de um salário negativo*/
int main(){
//declaracao de variaveis
int i,habitante,filho,mediaFilhos,totalFilhos,percentual;
float salario,mediaSalario,maiorSalario,salarioSoma,salario_100;
do{
    //SALARIO
    printf("Informe o salario R$:");
    scanf("%f",&salario);

    habitante+1;//variavel que armazena a quantidade de habitantes pesquisados
    salarioSoma=salario+salarioSoma;//variavel que armazena a quantidade de salarios 
    mediaSalario=salarioSoma;//variavel que armazena a media dos salarios

    //validacao maior salario
    if(salario>maiorSalario){
        maiorSalario==salario;
    }

    //validacao salario ate 100
    if(salario<=100){
        salario=salario_100;
    }

    salario=(salario_100*100)/habitante;
    //FILHOS
    printf("Informe a quantidade de filhos:");
    scanf("%d",&filho);

    //media dos filhos
    totalFilhos=filho+totalFilhos;//variavel que armazena a quantidade de filhos
    mediaFilhos=totalFilhos/habitante;//variavel que define a media dos filhos

}while(salario>-100);
//IMPRESSAO DE DADOS
printf("Media do salario da populacao:%.2f\n",mediaSalario);
printf("Media do numero de filhos:%d\n",mediaFilhos);
printf("Maior Salario:%.3f\n",maiorSalario);
printf("Percentual de salarios ate 100R$:%.1f\n",salario_100);


return 0;
}