#include <stdio.h>

int maximo (int numUno, int numDos);

int main (){
    int numero, numUno, numDos;
    numero = maximo (numUno, numDos);
    printf("El numero mayor es: %d", numero);
    printf("\n");
    return 0;
}

int maximo (int numUno, int numDos){
    puts("Ingrese un numero ...");
    scanf("%d", &numUno);
    puts("Ingrese un numero ...");
    scanf("%d", &numDos);
    if (numUno > numDos){
        return numUno;
    }else{
        return numDos;
    }
}
