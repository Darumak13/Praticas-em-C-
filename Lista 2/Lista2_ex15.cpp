#include <iostream>
#include <math.h>
#include <locale>

using namespace std;


// Crie um programa que pe�a ao usu�rio para digitar um n�mero de 1 a 12 
// e mostre o m�s correspondente.

int main() {
	
	// Inicializa��o das variaveis
	int Mes;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// O usu�rio informa o m�s desejado
	cout << "Informe o m�s desejado: ";
	cin  >> Mes;
	
	// Condicional que informa o m�s escolhido
	if (Mes == 1) {
		cout << "Janeiro \n";
	} else
		if (Mes == 2) {
			cout << "Fevereiro \n";
		} else
			if (Mes == 3) {
				cout << "Mar�o \n";
			} else
				if (Mes == 4) {
					cout << "Abril \n";
				} else
					if (Mes == 5) {
						cout << "Maio \n";
					} else
						if (Mes == 6) {
							cout << "Junho \n";
						} else
							if (Mes == 7) {
								cout << "Julho \n";
							} else
								if (Mes == 8) {
									cout << "Agosto \n";
								} else
									if (Mes == 9) {
										cout <<"Setembro \n";
									} else
										if (Mes == 10) {
											cout << "Outubro \n";
										} else
											if (Mes == 11) {
												cout << "Novembro \n";
											} else 
												if (Mes == 12){
												  cout << "Dezembro \n";
 												} else 	
 													cout << "M�s invalido \n";
 	system("pause");
 	
 	return 0;
												 
}
