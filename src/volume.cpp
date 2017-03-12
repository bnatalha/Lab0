#ifndef VOLUME_CPP
#define VOLUME_CPP

#include "volume.h"

double calcVolumePiramide(int areaBase, int altura){
    double volume = (1 / 3) * (areaBase * altura);
    return volume;
}

double calcVolumeCubo(int aresta){
    double volume = pow(aresta, 3);
    return volume;
}

double calcVolumeParalelepipedo(int aresta1, int aresta2, int aresta3){
    double volume = aresta1 * aresta2 * aresta3;
    return volume;
}

double calcVolumeTriangulo(int raio){
    double volume = (4 / 3) * 3.1415 * pow(raio, 3);
    return volume;
}

#endif
