#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Verifique se algum produto possui pre�o acima de R$ 100,00.

int main(){
	
	int i, vArrayPreco[5];
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inser��o dos pre�os
	for ( i = 1 ; i <= 5 ; i ++){
		cout << "Informe o pre�o do " << i << "� produto: ";
		cin  >> vArrayPreco[i];	
	}
	
	cout << "\n";
	system("pause");
	system("CLS");
	
	// Impress�o do vetor de pre�o
	cout << "Impress�o do Vetor \n";
	for( i = 1 ; i <= 5 ; i ++){
		cout << vArrayPreco[i] << "\t";
	}
	
	cout << "\n";
	system("pause");
	system("CLS");
	
	// Impress�o do vetor de pre�o
	cout << "Impress�o dos produtos acima de R$ 100,00 \n";
	for( i = 1 ; i <= 5 ; i ++){
		if (vArrayPreco[i] > 100){
			cout << vArrayPreco[i] << "\t";
		} else {
			
		}
	}
	
	cout << "\n";
	system("pause");
	
	return 0;
	
} 
