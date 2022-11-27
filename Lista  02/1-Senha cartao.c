/*Escreva um programa de controle de senha que dê três chances de acerto ao usuário;
se ele não conseguir, o programa deve avisar que o cartão foi bloqueado.*/
int main(){
    int i,senha,senhaTentativa;
    //definicao de senha 
    printf("Defina a senha:");
    scanf("%d",&senha);
    printf("\n");

    //tentativas para acerto
    for(i=0;i<3;i++){
    printf("Digite a senha:");
    scanf("%d",&senhaTentativa);

    //validacao senha
    if(senha==senhaTentativa){
        printf("Senha correta!\n");
        return 0;

    }else if(senha!=senhaTentativa){
        printf("Senha icorreta!\n");
    }
    
}
 printf("Cartao bloqueado");

return 0;
}