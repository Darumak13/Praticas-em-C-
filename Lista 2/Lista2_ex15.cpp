#include <iostream>
#include <math.h>
#include <locale>

using namespace std;


// Crie um programa que peça ao usuário para digitar um número de 1 a 12 
// e mostre o mês correspondente.

int main() {
	
	// Inicialização das variaveis
	int Mes;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// O usuário informa o mês desejado
	cout << "Informe o mês desejado: ";
	cin  >> Mes;
	
	// Condicional que informa o mês escolhido
	if (Mes == 1) {
		cout << "Janeiro \n";
	} else
		if (Mes == 2) {
			cout << "Fevereiro \n";
		} else
			if (Mes == 3) {
				cout << "Março \n";
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
 													cout << "Mês invalido \n";
 	system("pause");
 	
 	return 0;
												 
}
