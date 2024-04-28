#include <stdio.h>
#include <math.h>

float area (float a, float b, float c);

int main (){
    float areaTriangulo, a, b, c;
    areaTriangulo = area(a,b,c);
    printf("EL area del triangulo es: %f", areaTriangulo);
    printf("\n");
    return 0;
}

float area (float a, float b, float c){
    float p, area;
    puts("Ingrese lado a ...");
    scanf("%f", &a);
    puts("Ingrese lado b ...");
    scanf("%f", &b);
    puts("Ingrese lado c ...");
    scanf("%f", &c);

    p = a + b + c / 2;
    area = sqrt (p * (p-a) * (p-b) * (p-c));
    return area;
}
