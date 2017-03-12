/**
* @file perimetro.cpp
* @brief Implementação de funções que calculam o perimetro de figuras geométricas
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 11/03/2017
*/

#ifndef PERIMETRO_CPP
#define PERIMETRO_CPP

#include "perimetro.h"

/**
* @brief Funcao que calcula o perimetro de um triangulo equilatero
* @param lado O lado de um triangulo equilatero
* @return O perimetro de um triangulo equilatero
*/
double calcPerimetroTriangulo( int lado){ 
	return (3*lado);
}

/**
* @brief Funcao que calcula o perimetro de um retangulo
* @param base A base de um retangulo
* @param altura A altura de um retangulo
* @return O perimetro de um retangulo
*/
double calcPerimetroRetangulo( int base, int altura){ 
	return ( (base*2) + (altura*2) );
}

/**
* @brief Funcao que calcula o perimetro de um quadrado
* @param lado Um dos lados de um quadrado
* @return O perimetro de um quadrado
*/
double calcPerimetroQuadrado( int lado){
	return (lado*4);
}

/**
* @brief Funcao que calcula o perimetro de um circulo
* @param raio O raio de um circulo
* @return O perimetro de um circulo
*/
double calcPerimetroCirculo( int raio){ 
	return (2 * 3.1415 * raio); 
}

#endif
