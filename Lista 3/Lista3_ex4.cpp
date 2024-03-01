#include <iostream>
#include <math.h>
#include <locale>
#include <string>

using namespace std;

// Crie um programa com um menu de opções para realizar diferentes ações.

void Menu(){
	
	cout << "*************************** \n";
	cout << "MENU \n";
	cout << "1.Cadastro do nome do usuário \n";
	cout << "2.Cadastro da idade do usuário \n";
	cout << "3.Cadastro do e-mail \n";
	cout << "4.Impressão do cadastro do usuário  \n";
	cout << "5.Sair \n";
	cout << "*************************** \n";
	cout << "> ";		
}

int main(){
	
	// Inicialização de variaveis
	int Opcao, idade;
	string email, nome;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Menu
	Menu();
	
	cin >> Opcao;
	cout << "\n";
	
	// Condicional para mostrar a opção desejada
	while (Opcao != 5 ){
		switch(Opcao){
			
			case 1:
				system("CLS");
				cout << "Cadastro do nome \n";
				
				// Usuário cadastra o nome
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
				
				// Usuário cadastra a idade
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
				
				// Usuário cadastra o e-mail
				cout << "Informe o seu e-mail: ";
				cin  >> email;
				
				system("pause");
				system("CLS");
				
				Menu();
				cin >> Opcao;
				
				break;
				
			case 4: 
				system("CLS");
				cout << "Impressão do cadastro do usuário \n";
				
				// Imprime o cadastro do usuário
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
				cout << "Opção Invalida \n";
				
				Menu();
				cin >> Opcao;
				
				break;
		}
	}
}
