#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um vetor com 10 n�meros inteiros. Exiba apenas os n�meros pares desse vetor.

int main(){
	
	// Inicializa��o de variaveis
	int i, vNumeros[10];
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio insere 10 n�meros
	for (i = 0 ; i <= 10 ; i ++){
		cout << "Informe um n�mero: ";
		cin  >> vNumeros[i];
	}
	
	// Pausa e limpa tela
	system("pause");
	system("CLS");
	
	// Imprime apenas os n�meros pares
	for (i = 0 ; i <= 10 ; i ++){
		if (vNumeros[i]%2 == 0){
			cout << vNumeros[i] << " ";
		}
	}
	
	cout << "\n";
	system("pause");
	
	return 0;
	
}
