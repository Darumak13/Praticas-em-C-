#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir os comprimentos dos três lados de
// um triângulo e verifique se esses comprimentos podem formar um triângulo. Se sim,
// classifique o triângulo como equilátero, isósceles ou escaleno.

int main () {
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	double LadoT1, LadoT2, LadoT3;
	
	cout << "Informe o primeiro lado do triângulo: ";
	cin >> LadoT1;

	cout << "Informe o segundo lado do triângulo: ";
	cin >> LadoT2;
	
	cout << "Informe o terceiro lado do triângulo: ";
	cin >> LadoT3;
	
	//Calculo para saber se os comprimentos formam um triângulo
   	if(((LadoT1 + LadoT2) > LadoT3) && ((LadoT2 + LadoT3) > LadoT1) && ((LadoT1 + LadoT3) > LadoT2)) {
   		cout << "Não é um triangulo" << endl;
  	}else 
  		if((LadoT1 == LadoT2) && (LadoT1 == LadoT3)) {
         	cout<< "É um Triângulo Equilatero"<< endl;
    	}else
      		if((LadoT1 == LadoT2) || (LadoT2 == LadoT3) || (LadoT1 == LadoT3)) {
            	cout<< "É um Triângulo Isósceles"<< endl;
			}else
            	cout<< "É um Triângulo Escaleno" << endl;
            	
    system("pause");
    
    return 0;
	
}
