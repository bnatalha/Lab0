#include "header.h"
#include "calfiguras.h"

int main(){
    int option = 0;
    double area, perimetro, volume = 0.0;
    double base, altura, profundidade;
    
    cout << "Calculadora de Geometria Plana e Especial." << endl
        << "(1) Triangulo equilatero" << endl
        << "(2) Retangulo" << endl
        << "(3) Quadrado" << endl
        << "(4) Circulo" << endl
        << "(5) Piramide com base quadrangular" << endl
        << "(6) Cubo" << endl
        << "(7) Paralelepipedo" << endl
        << "(8) Esfera" << endl
        << "(0) Sair" << endl << endl
        << "Digite a sua opcao: ";
        
    cin >> option;
        
    do{
            
    	if(option < 0 || option > 8){
            cout << "Opcao nao eh valida! Digite uma opcao entre 0 a 8: ";
            cin >> option;
        }
            
        switch(option){
            
            case 0:
            	cout << "Saindo do programa...\n";
                return 0;
                break;
            
            case 1:
                //function call
                calc_triangulo();
                break;
            
            case 2:
                //function call
                calc_retangulo();
                break;
            
            case 3:
                //function call
                calc_quadrado();
                break;
            
            case 4:
                //function call
                calc_circulo();
                break;
            
            case 5:
                //function call
                calc_piramide();
                break;
            
            case 6:
                //function call
                calc_cubo();
                break;
            
            case 7:
                //function call
                calc_paralelepipedo();
                break;
            
            case 8:
                //function call
                calc_esfera();
                break;
        }
    }while(option < 0 || option > 8);
}     
