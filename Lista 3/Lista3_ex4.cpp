#include <iostream>
#include <math.h>
#include <locale>
#include <string>

using namespace std;

// Crie um programa com um menu de op��es para realizar diferentes a��es.

void Menu(){
	
	cout << "*************************** \n";
	cout << "MENU \n";
	cout << "1.Cadastro do nome do usu�rio \n";
	cout << "2.Cadastro da idade do usu�rio \n";
	cout << "3.Cadastro do e-mail \n";
	cout << "4.Impress�o do cadastro do usu�rio  \n";
	cout << "5.Sair \n";
	cout << "*************************** \n";
	cout << "> ";		
}

int main(){
	
	// Inicializa��o de variaveis
	int Opcao, idade;
	string email, nome;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Menu
	Menu();
	
	cin >> Opcao;
	cout << "\n";
	
	// Condicional para mostrar a op��o desejada
	while (Opcao != 5 ){
		switch(Opcao){
			
			case 1:
				system("CLS");
				cout << "Cadastro do nome \n";
				
				// Usu�rio cadastra o nome
				while(getline(cin, nome))
   					if(nome != ""){
          			break;
   				}
				
				system("pause");
				system("CLS");
			
				Menu();
				cin >> Opcao;
							
				break;
				
			case 2:
				system("CLS");
				cout << "Cadastro da idade \n";
				
				// Usu�rio cadastra a idade
				cout << "Informe a idade: ";
				cin  >> idade;
				
				system("pause");
				system("CLS");
				
				Menu();
				cin >> Opcao;
				
				break;
				
			case 3: 
				system("CLS");
				cout << "Cadastro do e-mail \n";
				
				// Usu�rio cadastra o e-mail
				cout << "Informe o seu e-mail: ";
				cin  >> email;
				
				system("pause");
				system("CLS");
				
				Menu();
				cin >> Opcao;
				
				break;
				
			case 4: 
				system("CLS");
				cout << "Impress�o do cadastro do usu�rio \n";
				
				// Imprime o cadastro do usu�rio
				cout << "**************************** \n";
				cout << "Nome: " << nome;
				cout << "  Idade: " << idade;
				cout << "\n";
				cout << "E-mail: " << email << "\n";
				cout << "**************************** \n";
				
				system("pause");
				system("CLS");
				
				Menu();
				cin >> Opcao;
				
				break;	
				
			default:
				system("CLS");
				cout << "Op��o Invalida \n";
				
				Menu();
				cin >> Opcao;
				
				break;
		}
	}
}
