/*Escreva um programa que conceda um aumenot de 10% ao salario
dos funcionarios de uma empresa, os quais recebem ate R$1.000,00.*/
int main(){
    float salario,salarioAumento;

    printf("Digite o salario:");
    scanf("%f",&salario);

    salarioAumento=(salario*0.1);

    if(salarioAumento>1000){
        printf("Salario invalido(pemitido apenas valores abaixo de 1000!");
    }else if(salarioAumento<1000){
        printf("Salario com aumento:%.3f",salarioAumento);
    }
}