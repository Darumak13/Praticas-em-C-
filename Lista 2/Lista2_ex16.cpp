#include <iostream>
#include <math.h>
#include <locale>

using namespace std;


// Crie um programa com um menu de opções para realizar diferentes ações.

int main() {
	
	// Inicialização das variaveis
	int opcoes , idade;
   	string nome , cpf , email , end;
   	   		
	setlocale(LC_CTYPE, "PORTUGUESE");

   	// Menu a ser mostrado para o usuário
   	cout << "1- Digitar e mostrar o nome" << endl;
   	cout << "2- Digitar e mostrar o cpf " << endl;
   	cout << "3- Informar a Idade " << endl;
   	cout << "4- Informar o email" << endl;
   	cout << "5- Informar o endereço" << endl;
   	cout << "Informe uma opção: ";
   	cin >> opcoes;
   	cout << "----------------------- "<< endl;  	
   	
   	// Condicional que mostra as opções desejadas
   	if (opcoes == 1) {
   		cout << "Digite um nome: ";
   		cin >> nome;
   		cout << "\n";
   		cout << "O nome digitado é: " << nome << "\n";
	} else 	
		if (opcoes == 2) {
			cout << "Digite um cpf: ";
			cin >> cpf;
			cout << "\n";
			cout << "O nome digitado é: " << cpf << "\n";
		} else
			if (opcoes == 3) {
			cout << "Informe a sua idade: ";
			cin >> idade;
			cout << "\n";
			cout << "A idade digita é: " << idade << "\n";				
			} else
				if (opcoes == 4) {
					cout << "informe um E-mail: ";
					cin >> email;
					cout << "\n";
					cout << "O email digitado é: " << email << "\n";
				} else 
					if (opcoes == 5) {
						cout << "Informe um endereço: ";
						cin >> end;
						cout << "\n";
						cout << "O endereço digitado é: " << end << "\n";
					} else
							cout << "Informação invalida";
							
	system("pause");
	
	return 0;
}
