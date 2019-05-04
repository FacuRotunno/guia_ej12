#include <stdio.h>

void main() {

    float cel;
  
    printf("Ingrese un valor Celsius: ");
    scanf("%f", &cel);

    printf("El valor en Farehaith es: %f ", cel * 9 / 5 + 32 );

}