#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a tr�s n�meros e 
// determine qual deles � o maior.

int main(){
	
	// Inicializa��o das variaveis
	int Num_1, Num_2, Num_3, maiorN;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inser��o dos tr�s n�meros 
	cout << "Informe o 1� n�mero: ";
	cin  >> Num_1;
	
	cout << "\n";

	cout << "Informe o 2� n�mero: ";
	cin  >> Num_2;
	
	cout << "\n";
	
	cout << "Informe o 3� n�mero: ";
	cin  >> Num_3;
	
	cout << "\n";
	
	// Condi��o que define o maior n�mero entre tr�s
	if ((Num_1 > Num_2) && (Num_1 > Num_3)) {
		maiorN = Num_1;
		cout << "O maior n�mero � o: " << maiorN  << "\n";
	}else
		if ((Num_2 > Num_1) && (Num_2 > Num_3)) {
			maiorN = Num_2;
			cout << "O maior n�mero � o: " << maiorN  << "\n";
		}else
			if ((Num_3 > Num_1) && (Num_3 > Num_2)) {
			maiorN = Num_3;
			cout << "O maior n�mero � o: " << maiorN  << "\n";
			}else
				maiorN = Num_1;
				cout << "O maior n�mero � o: " << maiorN << "\n";
			
	system("pause");
	
	return 0;
		
}
