#ifndef PERIMETRO_H
#define PERIMETRO_H

#include "header.h"

double calcPerimetroTriangulo	( int lado); 				// como o triângulo é equilátero, so precisamos multiplicar o tamanho do lado por 3.
double calcPerimetroRetangulo	( int base, int altura); 
double calcPerimetroQuadrado	( int lado); 				// como quadrados são equiláteros, multiplicamos um dos lados por 4.
double calcPerimetroCirculo		( int raio);

#endif
