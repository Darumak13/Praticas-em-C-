#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a dois n�meros e 
// determine qual deles � o menor.

int main(){
	
	// Inicializa��o das variaveis
	int Num_1, Num_2, Num_3, menorN;
	
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
	
	// Condi��o que define o menor n�mero entre tr�s
	if ((Num_1 < Num_2) && (Num_1 < Num_3)) {
		menorN = Num_1;
		cout << "O menor n�mero � o: " << menorN  << "\n";
	}else
		if ((Num_2 < Num_1) && (Num_2 < Num_3)) {
			menorN = Num_2;
			cout << "O menor n�mero � o: " << menorN  << "\n";
		}else
			if ((Num_3 < Num_1) && (Num_3 < Num_2)) {
			menorN = Num_3;
			cout << "O menor n�mero � o: " << menorN  << "\n";
			}else
				menorN = Num_1;
				cout << "O menor n�mero � o: " << menorN << "\n";
			
	system("pause");
	
	return 0;
		
}
