#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que permita ao usuário escolher entre converter dólares para reais
// ou reais para dólares.

// Menu 
void Menu(){
	
	cout << "*************************** \n";
	cout << "MENU \n";
	cout << "1.Conversão dolar para real \n";
	cout << "2.Conversão real para dolar \n";
	cout << "3.Sair \n";
	cout << "*************************** \n";
	cout << "> ";
}

int main(){
	
	// Inicialização de variaveis
	double Dolar, Real, Cambio;
	int Opcao;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Chama o procedimento menu
	Menu();
	cin  >> Opcao;
	cout << "\n";
	
	// Condicional para escolher qual conversão fazer
	while(Opcao != 3){
		switch(Opcao){
			
			case 1:
				
				system("CLS");
				
				cout << "Conversão de dolar para real \n";
				
				// Usuário informa o valor a ser convertido
				cout << "Informe um valor a ser convertido: ";
				cin  >> Dolar;
				
				cout << "\n";
				
				cout << "Informe a taxa de câmbio: ";
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
			
				cout << "Conversão de real para dolar \n";
				
				// Usuário informa o valor a ser convertido
				cout << "Informe um valor a ser convertido: ";
				cin  >> Real;
				
				cout << "\n";
				
				cout << "Informe a taxa de câmbio: ";
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
				
				cout << "Opção invalida \n";
			
				system("pause");
				system("CLS");;

				Menu();
				
				cin  >> Opcao;
					
				
		}
	}
	
	return 0;
}
