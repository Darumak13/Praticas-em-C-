#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um vetor com 5 n�meros inteiros. 
// Multiplique todos os elementos do vetor por 3.

int main(){
		
	int i, vArray[5];
		
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio informa 5 n�meros inteiros
	for ( i = 1 ; i <= 5 ; i ++){
		cout << "Informe o " << i << "� valor = ";
		cin  >> vArray[i];
	}
	
	cout << "\n";
	cout << "******************";
	cout << "\n";
	cout << "Impress�o do vetor";
	cout << "\n";
	for ( i = 1 ; i <= 5 ; i ++) {
		cout << vArray[i] << "\t";
	}
	cout << "\n";
	cout << "******************";
	cout << "\n";
	system("pause");
	system("CLS");
	
	cout << "\n";
	cout << "Impress�o do vetor multiplicado por 3";
	cout << "\n";
	for( i = 1 ; i <= 5 ; i ++){
		vArray[i] = vArray[i] * 3;
		cout << vArray[i] << "\t";
	}
	
	cout << "\n";
	system("pause");
	
}
