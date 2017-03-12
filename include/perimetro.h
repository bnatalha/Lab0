#ifndef PERIMETRO_H
#define PERIMETRO_H

#include "header.h"

double perimetroTriangulo	( int lado); 				// como o triângulo é equilátero, so precisamos multiplicar o tamanho do lado por 3.
double perimetroRetangulo	( int base, int altura); 
double perimetroQuadrado	( int lado); 				// como quadrados são equiláteros, multiplicamos um dos lados por 4.
double perimetroCirculo		( int raio);

#endif