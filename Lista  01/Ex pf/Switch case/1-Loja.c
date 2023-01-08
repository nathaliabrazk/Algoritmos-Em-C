/*Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. Faça um programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).*/
int main(){
    int codigo;
    float valorTotal,valorDesconto;
    printf("Digite o valor total da compra:");
    scanf("%f",&valorTotal);
    printf("\n");
    printf("\n|----------MENU----------|\n");
    printf("|Cliente comum(1)        |\n|Funcionario(2)          |\n|Vip(3)                  |");
    printf("\nDigite o codigo correspondente:");
    scanf("%d",&codigo);
    printf("\n");

    switch(codigo){
    //cliente comum
    case 1:
    printf("Valor da compra:%.1f",valorTotal);
    break;
    //funcionario
    case 2:
    valorDesconto=valorDesconto-(valorDesconto*0.1);
    printf("Valor com desconto:%.1f",valorDesconto);
    break;

    //Vip
    case 3:
    valorDesconto=valorDesconto-(valorDesconto*0.05);
    printf("Valor com desconto:%.1f",valorDesconto);
    break;

    }
   
}