#include <stdio.h>

char palabra (char caracter);

int main (){
    char palabra [10];
    char res [10];
    inverso(palabra,res);
    printf("%s", res);
    printf("\n");
    return 0;
}

char palabra (char caracter){
    puts("Ingrese una palbra ...");
    scanf("%s", caracter);
    int longitud = strlen(palabra);
    for (int i = longitud-1; i >=0, i--){
        return caracter;
    }
}
