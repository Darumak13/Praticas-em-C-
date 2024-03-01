#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que permita ao usu�rio escolher entre converter d�lares para reais
// ou reais para d�lares.

// Menu 
void Menu(){
	
	cout << "*************************** \n";
	cout << "MENU \n";
	cout << "1.Convers�o dolar para real \n";
	cout << "2.Convers�o real para dolar \n";
	cout << "3.Sair \n";
	cout << "*************************** \n";
	cout << "> ";
}

int main(){
	
	// Inicializa��o de variaveis
	double Dolar, Real, Cambio;
	int Opcao;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Chama o procedimento menu
	Menu();
	cin  >> Opcao;
	cout << "\n";
	
	// Condicional para escolher qual convers�o fazer
	while(Opcao != 3){
		switch(Opcao){
			
			case 1:
				
				system("CLS");
				
				cout << "Convers�o de dolar para real \n";
				
				// Usu�rio informa o valor a ser convertido
				cout << "Informe um valor a ser convertido: ";
				cin  >> Dolar;
				
				cout << "\n";
				
				cout << "Informe a taxa de c�mbio: ";
				cin  >> Cambio;
				
				Real = Dolar*Cambio;
				
				cout << Dolar << "$ para real = R$ " << Real << "\n";
			
				system("pause");
				system("CLS");
			
				Menu();
				
				cin  >> Opcao;
				 
				break;
				
			case 2:
				
				system("CLS");
			
				cout << "Convers�o de real para dolar \n";
				
				// Usu�rio informa o valor a ser convertido
				cout << "Informe um valor a ser convertido: ";
				cin  >> Real;
				
				cout << "\n";
				
				cout << "Informe a taxa de c�mbio: ";
				cin  >> Cambio;
				
				Dolar = Real/Cambio;
				
				cout << "R$ " << Real << " para dolar = " << Dolar << "$ \n";
			
				
				system("pause");
				system("CLS");
				
				Menu();
				
				cin  >> Opcao;
				
				break;
				
			default:
				
				system("CLS");;
				
				cout << "Op��o invalida \n";
			
				system("pause");
				system("CLS");;

				Menu();
				
				cin  >> Opcao;
					
				
		}
	}
	
	return 0;
}
