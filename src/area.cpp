/**
* @file area.cpp
* @brief Implementação de funções que calculam a área de figuras geométricas
* @author bnatalha, MJK2
* @since 10/03/2017
* @date 11/03/2017
*/

#ifndef AREA_CPP
#define AREA_CPP

#include "area.h"

/**
* @brief Funcao que calcula a area de um triangulo
* @param base A base de um triangulo equilatero
* @param altura A altura de um triangulo equilatero
* @return A area de um triangulo equilatero
*/
double calcAreaTriangulo(int base, int altura){
    double area = (base * altura) / 2;
    return area;
}

/**
* @brief Funcao que calcula a area de um retangulo
* @param base A base de um retangulo
* @param altura A altura de um retangulo
* @return A area de um retangulo
*/
double calcAreaRetangulo(int base, int altura){
    double area = base * altura;
    return area;
}

/**
* @brief Funcao que calcula a area de um circulo
* @param raio O raio de um circulo
* @return A area de um circulo
*/
double calcAreaCirculo((int raio){
    double area = 3.1415 * (pow(raio, 2));
    return area;
}

/**
* @brief Funcao que calcula area de quadrado
* @param lado Um dos lados de um quadrado
* @return A area de um quadrado
*/
double calcAreaQuadrado(int lado){
    double area = pow(lado, 2);
    return area;
}

/**
* @brief Funcao que calcula area de uma piramide quadrangular
* @param areaBase A area da base de uma piramide quadrangular
* @param ladoTriangulo Um dos lados de um dos triangulos equilateros que compoe uma piramide quadrangular
* @return A area de uma piramide quadrangular
*/
double calcAreaPiramide(int areaBase, int ladoTriangulo){
    double area = 4 * (areaBase * ladoTriangulo) + areaBase;
    return area;
}

/**
* @brief Funcao que calcula area de um cubo
* @param aresta Uma das arestas de um cubo
* @return A area de um cubo
*/
double calcAreaCubo(int aresta){
    double area = 6 * pow(aresta, 2);
    return area;
}

/**
* @brief Funcao que calcula area de um paralelepipedo
* @param aresta1 A primeira das 3 arestas de um paralelepipedo
* @param aresta2 A segunda das 3 arestas de um paralelepipedo
* @param aresta3 A terceira das 3 arestas de um paralelepipedo
* @return A area de um paralelepipedo
*/
double calcAreaParalelepipedo(int aresta1, int aresta2, int aresta3){
    double area = ((2 * aresta1) * (2 * aresta2)) + ((2 * aresta1) * (2 * aresta3)) + ((2 * aresta2) * (2 * aresta3));
    return area;
}

/**
* @brief Funcao que calcula area de uma esfera
* @param raio O raio de uma esfera
* @return A area de uma esfera
*/
double calcAreaEsfera(int raio){
    double area = 4 * 3.1415 * pow(raio, 2);
    return area;
}

#endif
