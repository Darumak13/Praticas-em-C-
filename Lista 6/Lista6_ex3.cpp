#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Verifique se algum produto possui preço acima de R$ 100,00.

int main(){
	
	int i, vArrayPreco[5];
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inserção dos preços
	for ( i = 1 ; i <= 5 ; i ++){
		cout << "Informe o preço do " << i << "° produto: ";
		cin  >> vArrayPreco[i];	
	}
	
	cout << "\n";
	system("pause");
	system("CLS");
	
	// Impressão do vetor de preço
	cout << "Impressão do Vetor \n";
	for( i = 1 ; i <= 5 ; i ++){
		cout << vArrayPreco[i] << "\t";
	}
	
	cout << "\n";
	system("pause");
	system("CLS");
	
	// Impressão do vetor de preço
	cout << "Impressão dos produtos acima de R$ 100,00 \n";
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
