/* Implementação das funções que calculam a área de figuras geométricas planas e
espaciais */

#ifndef AREA_CPP
#define AREA_CPP


#include "area.h"

double calcAreaTriangulo(int base, int altura){
    double area = (base * altura) / 2;
    return area;
}

double calcAreaRetangulo(int base, int altura){
    double area = base * altura;
    return area;
}

double calcAreaQuadrado(int lado){
    double area = 3.1415 * (pow(raio, 2));
    return area;
}

double calcAreaCirculo(int raio){
    double area = pow(lado, 2);
    return area;
}


double calcAreaPiramide(int areaBase, int ladoTriangulo){
    double area = 4 * (areaBase * ladoTriangulo) + areaBase;
    return area;
}

double calcAreaCubo(int aresta){
    double area = 6 * pow(aresta, 2);
    return area;
}

double calcAreaParalelepipedo(int aresta1, int aresta2, int aresta3){
    double area = ((2 * aresta1) * (2 * aresta2)) + ((2 * aresta1) * (2 * aresta3)) + ((2 * aresta2) * (2 * aresta3));
    return area;
}

double calcAreaTriangulo(int raio){
    double area = 4 * 3.1415 * pow(raio, 2);
    return area;
}

#endif
