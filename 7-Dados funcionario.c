//programa que leia o nome do funcionário, o sexo (F ou M), o número de
//matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
//e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
//de entrada e os dados de saída.
#include<stdio.h>
int main(){
//definicao de variaveis 
char nome[30], sexo, matricula[30];//%s=string, %c=char
int horas, valorHora, salario;//%d=int
//definicao de valores
printf("Digite o nome do funcionario: ");
scanf("%s", &nome);
fflush(stdin);
printf("Digite o sexo do funcionario(f/m): ");
scanf("%c", &sexo);
printf("Digite a matricula do funcionario: ");
scanf("%s", &matricula);
printf("Informe o numero de horas trabalhadas: ");
scanf("%d", &horas);
printf("Informe o valor por hora trabalhada: ");
scanf("%d", &valorHora);
//operacao para o resultado
salario=(horas*valorHora);
//impressao de dados
printf("\n-----Dados informados-------------------------------------");
printf("-------------------------------------------------------------\n");
printf("Nome:%s\n",nome);
printf("Sexo:%c\n",sexo);
printf("Matricula:%s\n",matricula);
printf("Horas trabalhadas:%d\n",horas);
printf("Valor por hora trabalhas:%d\n", valorHora);
printf("Salario:%d", salario);









return 0;
}