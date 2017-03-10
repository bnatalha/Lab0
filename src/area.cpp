#include <iostream>
using namespace std;

double calcAreaTriangulo(int base, int altura, double area){
    double area = (base * altura) / 2;
    return area;
}

double calcAreaRetangulo(int base, int altura, double area){
    double area = base * altura;
    return area;
}

double calcAreaCirculo(int lado, double area){
    double area = pow(lado, 2);
    return area;
}

double calcAreaQuadrado(int raio, double area){
    double area = 3.1415 * (pow(raio, 2));
    return area;
}

//todo
double calcAreaPiramide(int areaBase, int faceLateral, double area){
    double areaLateral = 
    double area = base * altura;
    return area;
}

//todo
double calcAreaCubo(int aresta, double area){
    double area = base * altura;
    return area;
}

//todo
double calcAreaParalelepipedo(int aresta1, int aresta2, int aresta3, double area){
    double area = base * altura;
    return area;
}

//todo
double calcAreaTriangulo(int raio, double area){
    double area = base * altura;
    return area;
}
