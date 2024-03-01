#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para inserir dois números. 
// Crie uma variável lógica para verificar se o primeiro número é divisível pelo segundo.

int main(){
	
	// Inicialização de variaveis 
	int num_1, num_2;
	bool Verifica;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// usuário insere os dois números
	cout << "Informe o 1° número: ";
	cin  >> num_1;
	
	cout << "\n";
	
	cout << "Informe o 2° número: ";
	cin  >> num_2;
	
	if (num_1 % num_2 == 0){
		Verifica = true;
	} else {
		Verifica = false;
	}
	
	if(Verifica == true){
		cout << "O número " << num_1 << " é divisivel pelo número " << num_2 << endl;
	} else {
		cout << "O número " << num_1 << " não é divisivel pelo número " << num_2 << endl;
	}
	
	system("pause");
	return 0;
}
