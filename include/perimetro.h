/**
* @file perimetro.h
* @brief Implementação de um header referente as chamadas de funções, dos perimetros de diferentes figuras, no arquivo perimetro.cpp
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 12/03/2017
*/

#ifndef PERIMETRO_H
#define PERIMETRO_H

#include "header.h"

double calcPerimetroTriangulo	( int lado); 				
double calcPerimetroRetangulo	( int base, int altura); 
double calcPerimetroQuadrado	( int lado); 				
double calcPerimetroCirculo		( int raio);

#endif
