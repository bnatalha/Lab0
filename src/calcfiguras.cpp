#ifndef CALCFIGURAS_CPP
#define CALCFIGURAS_CPP

#include "calcfiguras.h"

//    (1) Triangulo equilatero
void calc_triangulo( void ){
	int base, altura;

	cout << "Digite a base do triangulo: ";
	cin >> base;
	cout << "Digite a altura do triangulo: ";
	cin >> altura;

	cout << "Perímetro: " << CalcPerimetroTriangulo(base) << endl;
	cout << "Área: " << calcAreaTriangulo(base,altura) << endl;

}

//    (2) Retangulo
void calc_retangulo( void ){
	int base, altura;

	cout << "Digite a base do retangulo: ";
	cin >> base;
	cout << "Digite a altura do retangulo: ";
	cin >> altura;

	cout << "Perímetro: " << calcPerimetroRetangulo(base,altura) << endl;
	cout << "Área: " << calcAreaRetangulo(base,altura) << endl;

}

//    (3) Quadrado
void calc_quadrado( void ){
	int base, altura;

	cout << "Digite a base do quadrado: ";
	cin >> base;
	cout << "Digite a altura do quadrado: ";
	cin >> altura;

	cout << "Perímetro: " << calcPerimetroRetangulo(base) << endl;
	cout << "Área: " << calcAreaRetangulo(base,altura) << endl;
}

//    (4) Circulo
void calc_circulo( void ){
	int raio;

	cout << "Digite o raio do circulo: ";
	cin >> raio;

	cout << "Perímetro: " << calcPerimetroCirculo(raio) << endl;
	cout << "Área: " << calcAreaCirculo(raio) << endl;
}

//    (5) Piramide com base quadrangular
void calc_piramide( void ){
	//codigo
}

void calc_cubo( void ){
	//codigo
}

//    (7) Paralelepipedo
void calc_paralelepipedo( void ){
	//codigo
}

//    (8) Esfera
void calc_esfera( void ){
	//codigo
}

#endif