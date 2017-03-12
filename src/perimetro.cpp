#ifndef PERIMETRO_CPP
#define PERIMETRO_CPP

#include "perimetro.h"

//Triangulo equilatero
double perimetroTriangulo( int lado){ 
	return (3*lado);
}

//Retangulo
double perimetroRetangulo( int base, int altura){ 
	return ( (base*2) + (altura*2) );
}

//Quadrado
double perimetroQuadrado( int lado){
	return (lado*4);
}

//Circulo
double perimetroCirculo( int raio){ 
	return (2 * 3.1415 * raio); 
}

#endif