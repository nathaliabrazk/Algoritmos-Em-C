/*Escreva um programa que leia o nome de um aluno e as notas que ele obteve nas 
tres provas do semestre. No final o programa deve informar o nome do aluno e sua media(aritmetica)*/
int main(){
    char nome[30];
    int p1,p2,p3,media;

    printf("Informe o nome do aluno:");
    scanf("%s",&nome);

    printf("Digite a nota da primeira prova:");
    scanf("%d",&p1);

    printf("Digite a nota da segunda prova:");
    scanf("%d",&p2);
   
    printf("Digite a nota da terceira prova:");
    scanf("%d",&p3);
    
    printf("Nome aluno(a):%s\n",nome);
    media=(p1+p2+p3)/3;
    printf("Media aluno(a):%d",media);

}


   