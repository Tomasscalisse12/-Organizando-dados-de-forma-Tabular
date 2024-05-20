#include <stdio.h>
#include <locale.h>


void main(){

   
    setlocale(LC_ALL, "portuguese");
    printf(" listagem de alunos \n");
    printf("nome \t\tnota\n");
    printf("----------------------\n");

    printf("Ana maria\t8.5\n");
    printf("bianca oliveira \t9.0\n");
    printf("matheus martins\t7.8\n");
    printf("oliver noronha\t7.9\n");
     printf("----------------------");

     return 0;

}