#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir seu peso (em kg) e altura (em metros) e calcule o IMC. 
// Em seguida, mostre o resultado e uma mensagem indicando se a pessoa est� abaixo do peso, com peso normal ou 
// acima do peso. IMC�=�( peso � (altura x altura))

int main() {
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	double altura, IMC;
	int peso;
	
	// Informa o peso do usu�rio
	cout << "Informe o seu peso Kg : ";
	cin >> peso;
	
	// Informa a altura do usu�rio
	cout << "Informe a sua altura em metros: ";
	cin >> altura;
	
	// Calcula o IMC do usu�rio
	IMC =  (peso / (altura * altura));
	
	// Faz a compara��o para poder informa como est� situa��o do usu�rio
	if ( IMC < 18.5 ) {
		cout << "ABAIXO DO PESO" <<endl;
	}
	
	else
	   	if (( IMC >= 18.6 ) && ( IMC <= 24.9 )) {
	   		cout << "PESO IDEAL (PARAB�NS)"<<endl;
	   	}
	   
	   	else
	     	if (( IMC >= 25.0 ) && ( IMC <= 29.9 )) {
	     		cout << "LEVEMENTE ACIMA DO PESO"<<endl;
		 	}
		 
		 	else 
		    	if (( IMC >= 30.0 ) && ( IMC <= 34.9 )) {
		    		cout << "OBESIDADE GRAU I" <<endl;
				}
			
				else
					if (( IMC >= 35.0 ) && ( IMC <= 39.9 )) {
						cout << "OBESIDADE GRAU II (SEVERA)" <<endl;
					}
					
					else {
						cout << "OBESIDADE GRAU III (M�RBIDA)" <<endl;
					}
			   
	system("pause");
	
	return 0;
	
}
