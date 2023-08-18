#include <stdio.h>
#include <util.h>

int main(){
    char name[50];
    printf("Digite nome: ");
    fgets(name, 40, stdin);

    imprime(name);

    return 0;
}
