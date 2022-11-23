/*Escreva um programa que teste uma determinada senha*/
int main(){
    int senha, senhaTeste;

    printf("Digite a senha:");
    scanf("%d",&senha);
    printf("Confirme a senha:");
    scanf("%d",&senhaTeste);

    if(senha==senhaTeste){
        printf("Senha correta!");
    }else if(senha!=senhaTeste){
        printf("Senha incorreta!");
    }
}