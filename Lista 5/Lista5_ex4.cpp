#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para inserir dois n�meros. 
// Crie uma vari�vel l�gica para verificar se o primeiro n�mero � divis�vel pelo segundo.

int main(){
	
	// Inicializa��o de variaveis 
	int num_1, num_2;
	bool Verifica;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// usu�rio insere os dois n�meros
	cout << "Informe o 1� n�mero: ";
	cin  >> num_1;
	
	cout << "\n";
	
	cout << "Informe o 2� n�mero: ";
	cin  >> num_2;
	
	if (num_1 % num_2 == 0){
		Verifica = true;
	} else {
		Verifica = false;
	}
	
	if(Verifica == true){
		cout << "O n�mero " << num_1 << " � divisivel pelo n�mero " << num_2 << endl;
	} else {
		cout << "O n�mero " << num_1 << " n�o � divisivel pelo n�mero " << num_2 << endl;
	}
	
	system("pause");
	return 0;
}
