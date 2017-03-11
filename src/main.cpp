#include "header.h"
#include "calcarea.h"
#include "calcperimetro.h"
#include "calcvolume.h"

bool negativo( double n ) {
    if (n < 0) {
        cout << "Valor inserido é inválido! " << n 
            << " é um número negativo. Por favor, insira um número positivo." << endl;
        return true;
    }
    return false;
}

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
                do{
                    cout << "Digite o valor da base do triângulo: "
                    cin >> base;
                }
                while( negativo(base) );

                do{
                    cout << "Digite o valor da altura do triângulo: "
                    cin >> base;
                }
                while( negativo(altura) );

                getTrianguloArea(base, altura);
                getTriangluoPerimetro(base. altura);

                break;
            case 2:
                //function call
                break;
            case 3:
                //function call
                break;
            case 4:
                //function call
                break;
            case 5:
                //function call
                break;
            case 6:
                //function call
                break;
            case 7:
                //function call
                break;
            case 8:
                //function call
                break;
        }
    }while(option < 0 || option > 8);
}     
