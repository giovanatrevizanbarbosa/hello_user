#include "util_impl.h"

int main(){
    char name[50];
    printf("Digite nome: ");
    fgets(name, 40, stdin);

    imprime(name);

    return 0;
}
