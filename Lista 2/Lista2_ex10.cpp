#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça dois números e 
// determine qual deles é o menor.

int main(){
	
	// Inicialização das variaveis
	int Num_1, Num_2, Num_3, menorN;
	
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
	
	// Condição que define o menor número entre três
	if ((Num_1 < Num_2) && (Num_1 < Num_3)) {
		menorN = Num_1;
		cout << "O menor número é o: " << menorN  << "\n";
	}else
		if ((Num_2 < Num_1) && (Num_2 < Num_3)) {
			menorN = Num_2;
			cout << "O menor número é o: " << menorN  << "\n";
		}else
			if ((Num_3 < Num_1) && (Num_3 < Num_2)) {
			menorN = Num_3;
			cout << "O menor número é o: " << menorN  << "\n";
			}else
				menorN = Num_1;
				cout << "O menor número é o: " << menorN << "\n";
			
	system("pause");
	
	return 0;
		
}
