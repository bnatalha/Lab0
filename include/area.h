/**
* @file area.h
* @brief Implementação de um header referente as chamadas de funções, das areas de diferentes figuras, no arquivo calcfiguras.cpp
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 12/03/2017
*/

#ifndef AREA_H
#define AREA_H

#include "header.h"

double calcAreaTriangulo(int base, int altura);
double calcAreaRetangulo(int base, int altura);
double calcAreaQuadrado(int lado);
double calcAreaCirculo(int raio);
double calcAreaPiramide(int areaBase, int faceLateral);
double calcAreaCubo(int aresta);
double calcAreaParalelepipedo(int aresta1, int aresta2, int aresta3);
double calcAreaEsfera(int raio);

#endif
