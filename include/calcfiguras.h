/**
* @file perimetro.h
* @brief Implementação de um header referente as chamadas de funções, de entradas para diferentes figuras, no arquivo calcfiguras.cpp
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 12/03/2017
*/

#ifndef CALCFIGURAS_H
#define CALCFIGURAS_H

#include "area.h"
#include "volume.h"
#include "perimetro.h"

int NumeroNatural ( void );           //	  Só deixa atribuir valores maiores ou iguais a 0 as medidas das figuras
void calc_triangulo( void ); 		      //    (1) Triangulo equilatero
void calc_retangulo( void ); 		      //    (2) Retangulo
void calc_quadrado( void ); 		      //    (3) Quadrado
void calc_circulo( void ); 			      //    (4) Circulo
void calc_piramide( void ); 		      //    (5) Piramide com base quadrangular
void calc_cubo( void );				        //	  (6) Cubo
void calc_paralelepipedo( void ); 	  //    (7) Paralelepipedo
void calc_esfera( void );			        //    (8) Esfera

#endif
