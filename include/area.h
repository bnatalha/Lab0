#ifndef AREA_H
#define AREA_H

#include "header.h"

double calcAreaTriangulo(int base, int altura, double area);
double calcAreaRetangulo(int base, int altura, double area);
double calcAreaCirculo(int lado, double area);
double calcAreaQuadrado(int raio, double area);
double calcAreaPiramide(int areaBase, int faceLateral, double area);
double calcAreaCubo(int aresta, double area);
double calcAreaParalelepipedo(int aresta1, int aresta2, int aresta3, double area);
double calcAreaTriangulo(int raio, double area);

#endif