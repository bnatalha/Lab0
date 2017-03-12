/* Definição dos protótipos das funções que calculam a área de figuras geométricas
planas e espaciais */

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