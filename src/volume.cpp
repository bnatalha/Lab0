/**
* @file volume.cpp
* @brief Implementação de funções que calculam o volume de figuras geométricas
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 11/03/2017
*/

#ifndef VOLUME_CPP
#define VOLUME_CPP

#include "volume.h"

/**
* @brief Funcao que calcula o volume de uma piramide quadrangular
* @param areaBase A area da base de uma piramide quadrangular
* @param altura A altura de uma piramide quadrangular
* @return O volume de uma piramide quadrangular
*/
double calcVolumePiramide(int areaBase, int altura){
    double volume = (1 / 3) * (areaBase * altura);
    return volume;
}

/**
* @brief Funcao que calcula o volume de um cubo
* @param aresta A aresta de um cubo
* @return O volume de um cubo
*/
double calcVolumeCubo(int aresta){
    double volume = pow(aresta, 3);
    return volume;
}

/**
* @brief Funcao que calcula o volume de um paralelepipedo
* @param aresta1 A primeira das 3 arestas de um paralelepipedo
* @param aresta2 A segunda das 3 arestas de um paralelepipedo
* @param aresta3 A terceira das 3 arestas de um paralelepipedo
* @return O volume de um paralelepipedo
*/
double calcVolumeParalelepipedo(int aresta1, int aresta2, int aresta3){
    double volume = aresta1 * aresta2 * aresta3;
    return volume;
}

/**
* @brief Funcao que calcula o volume de uma esfera
* @param raio O raio de uma esfera
* @return O volume de uma esfera
*/
double calcVolumeEsfera(int raio){
    double volume = (4 / 3) * 3.1415 * pow(raio, 3);
    return volume;
}

#endif
