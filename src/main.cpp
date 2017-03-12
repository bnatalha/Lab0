/**
* @file main.cpp
* @brief O arquivo main da calculadora geométrica
* @details Baseado na opcao escolhida pelo usuario, uma figura geometrica é escolhida e funcoes
* correspondentes a essa figura sao selecionadas
* @author bnatalha, MJK2
* @since 11/03/2017
* @date 11/03/2017
*/

#include "header.h"
#include "calcfiguras.h"

/**
* @brief Funcao que chama outras funcoes baseado no input do usuario
*/
int main(){
    int option = 0;
    
    cout << "Calculadora de Geometria Plana e Especial." << endl
        << "(1) Triangulo equilatero" << endl
        << "(2) Retangulo" << endl
        << "(3) Quadrado" << endl
        << "(4) Circulo" << endl
        << "(5) Piramide com base quadrangular" << endl
        << "(6) Cubo" << endl
        << "(7) Paralelepipedo" << endl
        << "(8) Esfera" << endl
        << "(0) Sair" << endl << endl;       
    
        
    do{
        cout << endl << "Digite a sua opcao: ";
        cin >> option;

    	while(option < 0 || option > 8){
            cout << "Opcao nao eh valida! Digite uma opcao entre 0 a 8: ";
            cin >> option;
        }
            
        switch(option){
            
            case 0:
            	cout << "Saindo do programa..." << endl;
                return 0;
                break;
            
            case 1:
                calc_triangulo();
                break;
            
            case 2:
                calc_retangulo();
                break;
            
            case 3:
                calc_quadrado();
                break;
            
            case 4:
                calc_circulo();
                break;
            
            case 5:
                calc_piramide();
                break;
            
            case 6:
                calc_cubo();
                break;
            
            case 7:
                calc_paralelepipedo();
                break;
            
            case 8:
                calc_esfera();
                break;
        }
    }while(option >= 0 and option <= 8);
}     
