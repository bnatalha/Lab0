/**
* @file volume.h
* @brief Implementação de um header referente as chamadas de funções, dos volumes de diferentes figuras, no arquivo calcfiguras.cpp
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 12/03/2017
*/

#ifndef VOLUME_H
#define VOLUME_H

#include "header.h"

double calcVolumePiramide(int areaBase, int altura);
double calcVolumeCubo(int aresta);
double calcVolumeParalelepipedo(int aresta1, int aresta2, int aresta3);
double calcVolumeEsfera(int raio);

#endif
