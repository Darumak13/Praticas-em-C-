#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça três números e 
// determine qual deles é o maior.

int main(){
	
	// Inicialização das variaveis
	int Num_1, Num_2, Num_3, maiorN;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inserção dos três números 
	cout << "Informe o 1º número: ";
	cin  >> Num_1;
	
	cout << "\n";

	cout << "Informe o 2º número: ";
	cin  >> Num_2;
	
	cout << "\n";
	
	cout << "Informe o 3º número: ";
	cin  >> Num_3;
	
	cout << "\n";
	
	// Condição que define o maior número entre três
	if ((Num_1 > Num_2) && (Num_1 > Num_3)) {
		maiorN = Num_1;
		cout << "O maior número é o: " << maiorN  << "\n";
	}else
		if ((Num_2 > Num_1) && (Num_2 > Num_3)) {
			maiorN = Num_2;
			cout << "O maior número é o: " << maiorN  << "\n";
		}else
			if ((Num_3 > Num_1) && (Num_3 > Num_2)) {
			maiorN = Num_3;
			cout << "O maior número é o: " << maiorN  << "\n";
			}else
				maiorN = Num_1;
				cout << "O maior número é o: " << maiorN << "\n";
			
	system("pause");
	
	return 0;
		
}
