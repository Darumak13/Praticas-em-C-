#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um vetor com 5 alturas de pessoas. Calcule a altura m�dia.

int main(){
	
	// Inicializa��o de variaveis
	int i;
	double vAltura[5], somaAltura, mediaAltura;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio insere 5 alturas diferentes
	for (i = 1 ; i <= 5 ; i ++){
		cout << "Informe a " << i << "� altura: ";
		cin >> vAltura[i];
		
		// Soma as 5 alturas
		somaAltura += vAltura[i];
	}
	
	// Calcula a m�dia das 5 alturas
	mediaAltura = somaAltura/5;
	cout << "\n";
	
	// Pausa e limpa a tela
	system("pause");
	system("CLS");
	
	// Imprime o vetor de altura
	for (i = 1 ; i <= 5 ; i ++){
		cout << "[" << i << "] " << vAltura[i] << "\t";
	}
	
	cout << "\n";
	system("pause");
	system("CLS");
	
	// Imprime a media das 5 alturas
	cout << "A m�dia das 5 alturas � = " << mediaAltura << endl;
	
	system("pause");
	
	return 0;
	
	
}
