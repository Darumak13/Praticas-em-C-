#include <iostream>
#include <math.h>
#include <locale>

using namespace std;


// Crie um programa com um menu de op��es para realizar diferentes a��es.

int main() {
	
	// Inicializa��o das variaveis
	int opcoes , idade;
   	string nome , cpf , email , end;
   	   		
	setlocale(LC_CTYPE, "PORTUGUESE");

   	// Menu a ser mostrado para o usu�rio
   	cout << "1- Digitar e mostrar o nome" << endl;
   	cout << "2- Digitar e mostrar o cpf " << endl;
   	cout << "3- Informar a Idade " << endl;
   	cout << "4- Informar o email" << endl;
   	cout << "5- Informar o endere�o" << endl;
   	cout << "Informe uma op��o: ";
   	cin >> opcoes;
   	cout << "----------------------- "<< endl;  	
   	
   	// Condicional que mostra as op��es desejadas
   	if (opcoes == 1) {
   		cout << "Digite um nome: ";
   		cin >> nome;
   		cout << "\n";
   		cout << "O nome digitado �: " << nome << "\n";
	} else 	
		if (opcoes == 2) {
			cout << "Digite um cpf: ";
			cin >> cpf;
			cout << "\n";
			cout << "O nome digitado �: " << cpf << "\n";
		} else
			if (opcoes == 3) {
			cout << "Informe a sua idade: ";
			cin >> idade;
			cout << "\n";
			cout << "A idade digita �: " << idade << "\n";				
			} else
				if (opcoes == 4) {
					cout << "informe um E-mail: ";
					cin >> email;
					cout << "\n";
					cout << "O email digitado �: " << email << "\n";
				} else 
					if (opcoes == 5) {
						cout << "Informe um endere�o: ";
						cin >> end;
						cout << "\n";
						cout << "O endere�o digitado �: " << end << "\n";
					} else
							cout << "Informa��o invalida";
							
	system("pause");
	
	return 0;
}
