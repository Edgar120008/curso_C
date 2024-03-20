//un comentario de una sola linea

/*
este es un comentario multilinea

hola como estas
*/

// inclusion de las bibliotecas
#include<stdio.h>

//funcion principal

int main(){
    // el codigo del programa

    // Aqui se esta declarando una variable de tipo int y luego se le asigna un valor
    int numero = 10, otronumero = 30, suma, multiplicacion;

    // operador matematico +
    suma = numero + otronumero;

    //  operador matematico *
    multiplicacion = suma * numero;

    // aqui se le esta impriminedo el valor de la variable 
    printf("El valor de la suma de %i mas %i es: %i \n", numero, otronumero, suma);

    // aqui se le esta impriminedo el valor de la variable 
    printf("El valor de la multiplicacion de %i por %i es: %i \n", suma, numero, multiplicacion);

    // Aqui se esta declarando una variable de tipo float y luego se le asigna un valor
    float numeroDecimal = 100.20, otroNumeroDecimal = 20.76, resta, division;

    // operador matematico -
    resta = numeroDecimal - otroNumeroDecimal;

    // operador matematico /
    division = resta / otroNumeroDecimal;

    // aqui se le esta impriminedo el valor de la variable 
    printf("El valor de la resta de %f menos %f es: %f \n", numeroDecimal, otroNumeroDecimal, resta);
    
    // aqui se le esta impriminedo el valor de la variable 
    printf("El valor de la division de %f sobre %f es: %f \n", resta, otroNumeroDecimal, division);
    return 0;
}