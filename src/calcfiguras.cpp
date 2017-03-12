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
	int a_base, a_face, altura;

	cout << "Digite a area da base da piramide: ";
	cin >> a_base;
	cout << "Digite a area da face lateral da piramide: ";
	cin >> a_face;
	cout << "Digite a altura da piramide: ";
	cin >> altura;

	cout << "Volume: " << calcVolumePiramide(a_base,altura) << endl;
	cout << "Área: " << calcAreaPiramide(a_base,a_face) << endl;
}

void calc_cubo( void ){
	int aresta;

	cout << "Digite a aresta do cubo: ";
	cin >> aresta;

	cout << "Volume: " << calcVolumeCubo(aresta) << endl;
	cout << "Área: " << calcAreaCubo(aresta) << endl;
}

//    (7) Paralelepipedo
// profundidade
void calc_paralelepipedo( void ){
	int a1, a2, a3;

	cout << "Digite a largura do paralelepipedo: ";
	cin >> a1;
	cout << "Digite a profundidade do paralelepipedo: ";
	cin >> a2;
	cout << "Digite a altura do paralelepipedo: ";
	cin >> a3;

	cout << "Volume: " << calcVolumeParalelepipedo(a1,a2,a3) << endl;
	cout << "Área: " << calcAreaParalelepipedo(a1,a2,a3) << endl;
}

//    (8) Esfera
void calc_esfera( void ){
	//codigo
}

#endif