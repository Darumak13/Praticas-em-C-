#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um vetor com 10 números inteiros. Exiba apenas os números pares desse vetor.

int main(){
	
	// Inicialização de variaveis
	int i, vNumeros[10];
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usuário insere 10 números
	for (i = 0 ; i <= 10 ; i ++){
		cout << "Informe um número: ";
		cin  >> vNumeros[i];
	}
	
	// Pausa e limpa tela
	system("pause");
	system("CLS");
	
	// Imprime apenas os números pares
	for (i = 0 ; i <= 10 ; i ++){
		if (vNumeros[i]%2 == 0){
			cout << vNumeros[i] << " ";
		}
	}
	
	cout << "\n";
	system("pause");
	
	return 0;
	
}
