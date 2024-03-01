#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um vetor com 5 alturas de pessoas. Calcule a altura média.

int main(){
	
	// Inicialização de variaveis
	int i;
	double vAltura[5], somaAltura, mediaAltura;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usuário insere 5 alturas diferentes
	for (i = 1 ; i <= 5 ; i ++){
		cout << "Informe a " << i << "° altura: ";
		cin >> vAltura[i];
		
		// Soma as 5 alturas
		somaAltura += vAltura[i];
	}
	
	// Calcula a média das 5 alturas
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
	cout << "A média das 5 alturas é = " << mediaAltura << endl;
	
	system("pause");
	
	return 0;
	
	
}
