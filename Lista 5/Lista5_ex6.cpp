#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie uma variável lógica para verificar se um usuário tem permissão de acesso 
// (por exemplo, se é administrador).

int main(){
	
	// Variaveis
	bool permissao;
	string Adm;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// usuário informa se é um administrador 
	cout << "É um administrador ? ";
	cin  >> Adm;
	
	if (Adm == "SIM" || Adm == "sim" || Adm == "Sim"){
		permissao = true;	
	} else {
		permissao = false;
	}
	
	if (permissao == true){
		cout << "O usuário é um administrador" << endl;
	} else {
		cout << "O usuário não é um administrador" << endl;
	}
	
	system("pause");
	return 0;
}
