#ifndef PERIMETRO_CPP
#define PERIMETRO_CPP

#include "perimetro.h"

//Triangulo equilatero
double calcPerimetroTriangulo( int lado){ 
	return (3*lado);
}

//Retangulo
double calcPerimetroRetangulo( int base, int altura){ 
	return ( (base*2) + (altura*2) );
}

//Quadrado
double calcPerimetroQuadrado( int lado){
	return (lado*4);
}

//Circulo
double calcPerimetroCirculo( int raio){ 
	return (2 * 3.1415 * raio); 
}

#endif
