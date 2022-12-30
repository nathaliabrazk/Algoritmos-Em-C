/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9*/
#include<stdio.h>
int main(){
    int opcao;
    printf("----------OPCOES----------\n");
    printf("Tabuada de 1-Digite 1\nTabuada de 2-Digite 2\nTabuada de 3-Digite 3\nTabuada de 4-Digite 4\nTabuada de 5-Digite 5\nTabuada de 6-Digite 6\nTabuada de 7-Digite 7\nTabuada de 8-Digite 8\nTabuada de 9-Digite 9\n");
    printf("\nDigite a tabuada desejada:");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
        printf("\n1x1=1\n1x2=2\n1x3=3\n1x4=4\n1x5=5\n1x6=6\n1x7=7\n1x8=8\n1x9=9\n1x10=10\n");
        break;

        case 2:
        printf("\n2x1=2\n2x2=4\n2x3=6\n2x4=8\n2x5=10\n2x6=12\n2x7=14\n2x8=16\n2x9=18\n2x10=20\n");
        break;

        case 3:
        printf("\n3x1=3\n3x2=6\n3x3=9\n3x4=12\n3x5=15\n3x6=18\n3x7=21\n3x8=24\n3x9=27\n3x10=30\n");
        break;

        case 4:
        printf("\n4x1=4\n4x2=8\n4x3=12\n4x4=16\n4x5=20\n4x6=24\n4x7=28\n4x8=32\n4x9=36\n4x10=40\n");
        break;

        case 5:
        printf("\n5x1=5\n5x2=10\n5x3=15\n5x4=20\n5x5=25\n5x6=30\n5x7=35\n5x8=40\n5x9=45\n5x10=50\n");
        break;

        case 6:
        printf("\n6x1=6\n6x2=12\n6x3=18\n6x4=24\n6x5=30\n6x7=42\n6x8=48\n6x9=54\n6x10=60\n");
        break;

        case 7:
        printf("\n7x1=7\n7x2=14\n7x3=21\n7x4=28\n7x5=35\n7x6=42\n7x7=49\n7x8=56\n7x9=63\n7x10=70\n");
        break;

        case 8:
        printf("\n8x1=8\n8x2=16\n8x3=24\n8x4=32\n8x5=40\n8x6=48\n8x7=56\n8x9=72\n8x10=80\n");
        break;
       
       case 9:
       printf("\n9x1=9\n9x2=18\n9x3=27\n9x4=36\n9x5=45\n9x6=54\n9x7=63\n9x8=72\n9x9=81\n9x10=90\n");
       break;
    }
    getch();
    return 0;



}