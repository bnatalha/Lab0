/**
* @file calcfiguras.cpp
* @brief Implementação de funções que pedem por entradas do usuario baseado na figura geometrica escolhida
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 11/03/2017
*/

#ifndef CALCFIGURAS_CPP
#define CALCFIGURAS_CPP

#include "calcfiguras.h"

/**
* @brief Funcao que controla o input de inteiros do usuario para serem numero naturais
* @return Um numero natural entrado pelo usuario
*/
int NumeroNatural ( void ){
	int x;

	do{
		cin >> x;
		if(x < 0 ){
			cout << "![ERRO] Não existe medida negativa para figuras geométrica."
			<< endl << "Insira um número positivo: ";
		}
	} while ( x < 0 );
	return x;
}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a um triangulo equilatero
*/
void calc_triangulo( void ){
	int base, altura;

	cout << "Digite a base do triangulo: ";
	base = NumeroNatural();
	cout << "Digite a altura do triangulo: ";
	altura = NumeroNatural();

	cout << "Perímetro: " << calcPerimetroTriangulo(base) << endl;
	cout << "Área: " << calcAreaTriangulo(base,altura) << endl;

}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a um retangulo
*/
void calc_retangulo( void ){
	int base, altura;

	cout << "Digite a base do retangulo: ";
	base = NumeroNatural();
	cout << "Digite a altura do retangulo: ";
	altura = NumeroNatural();

	cout << "Perímetro: " << calcPerimetroRetangulo(base,altura) << endl;
	cout << "Área: " << calcAreaRetangulo(base,altura) << endl;

}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a um quadrado
*/
void calc_quadrado( void ){
	int lado;

	cout << "Digite o lado do quadrado: ";
	lado = NumeroNatural();

	cout << "Perímetro: " << calcPerimetroQuadrado(lado) << endl;
	cout << "Área: " << calcAreaQuadrado(lado) << endl;
}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a um circulo
*/
void calc_circulo( void ){
	int raio;

	cout << "Digite o raio do circulo: ";
	raio = NumeroNatural();

	cout << "Perímetro: " << calcPerimetroCirculo(raio) << endl;
	cout << "Área: " << calcAreaCirculo(raio) << endl;
}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a uma piramide quadrangular
*/
void calc_piramide( void ){
	int a_base, a_face, altura;

	cout << "Digite a area da base da piramide: ";
	a_base = NumeroNatural();
	cout << "Digite a area da face lateral da piramide: ";
	a_face = NumeroNatural();
	cout << "Digite a altura da piramide: ";
	altura = NumeroNatural();

	cout << "Volume: " << calcVolumePiramide(a_base,altura) << endl;
	cout << "Área: " << calcAreaPiramide(a_base,a_face) << endl;
}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a um cubo
*/
void calc_cubo( void ){
	int aresta;

	cout << "Digite a aresta do cubo: ";
	aresta = NumeroNatural();

	cout << "Volume: " << calcVolumeCubo(aresta) << endl;
	cout << "Área: " << calcAreaCubo(aresta) << endl;
}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a um paralelepipedo
*/
void calc_paralelepipedo( void ){
	int a1, a2, a3;

	cout << "Digite a largura do paralelepipedo: ";
	a1 = NumeroNatural();
	cout << "Digite a profundidade do paralelepipedo: ";
	a2 = NumeroNatural();
	cout << "Digite a altura do paralelepipedo: ";
	a3 = NumeroNatural();

	cout << "Volume: " << calcVolumeParalelepipedo(a1,a2,a3) << endl;
	cout << "Área: " << calcAreaParalelepipedo(a1,a2,a3) << endl;
}

/**
* @brief Funcao que pede por entradas e imprime um resultado referentes a uma esfera
*/
void calc_esfera( void ){
	int raio;

	cout << "Digite o raio da esfera: ";
	raio = NumeroNatural();

	cout << "Volume: " << calcVolumeEsfera(raio) << endl;
	cout << "Área: " << calcAreaEsfera(raio) << endl;
}

#endif
