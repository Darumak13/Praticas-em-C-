#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir os comprimentos dos tr�s lados de
// um tri�ngulo e verifique se esses comprimentos podem formar um tri�ngulo. Se sim,
// classifique o tri�ngulo como equil�tero, is�sceles ou escaleno.

int main () {
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	double LadoT1, LadoT2, LadoT3;
	
	cout << "Informe o primeiro lado do tri�ngulo: ";
	cin >> LadoT1;

	cout << "Informe o segundo lado do tri�ngulo: ";
	cin >> LadoT2;
	
	cout << "Informe o terceiro lado do tri�ngulo: ";
	cin >> LadoT3;
	
	//Calculo para saber se os comprimentos formam um tri�ngulo
   	if(((LadoT1 + LadoT2) > LadoT3) && ((LadoT2 + LadoT3) > LadoT1) && ((LadoT1 + LadoT3) > LadoT2)) {
   		cout << "N�o � um triangulo" << endl;
  	}else 
  		if((LadoT1 == LadoT2) && (LadoT1 == LadoT3)) {
         	cout<< "� um Tri�ngulo Equilatero"<< endl;
    	}else
      		if((LadoT1 == LadoT2) || (LadoT2 == LadoT3) || (LadoT1 == LadoT3)) {
            	cout<< "� um Tri�ngulo Is�sceles"<< endl;
			}else
            	cout<< "� um Tri�ngulo Escaleno" << endl;
            	
    system("pause");
    
    return 0;
	
}
