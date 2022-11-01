#include<stdio.h>
int main(){
	int n1=0,n2=0;
	char operador;
	printf("--- CALCULADORA ---\n");
	printf("Informe o n1: ");
    scanf("%d", &n1);
    fflush(stdin);

	printf("Informe a operecao(+|-): ");
	scanf("%c", &operador);
	
	printf("informe o n2: ");
	scanf("%d", &n2);
	
	if(operador == '+'){
		printf("SOMA: %d", n1+n2);
		}else{
			if(operador == '-'){
				printf("SUBTRACAO: %d", n1-n2);
				}else{
					if(operador=='/'){
                    printf("DIVISAO: %d", n1/n2);
                    }else{
                        if(operador=='*'){
                        printf("MULTIPLICACAO: %d", n1*n2);
                        }else{
                            if(operador=='%'){
                                printf("Operador invalido");
                            }
                        }
                    }
				}
			}
	
	return 0;
}