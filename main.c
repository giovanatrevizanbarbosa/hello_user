#include <stdio.h>
#include <util.h>

int main(){
    char name[50];
    printf("Digite nome: ");
    fgets(nome, 40, stdin);

    imprime(nome);

    return 0;
}