#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie uma vari�vel l�gica para verificar se um usu�rio tem permiss�o de acesso 
// (por exemplo, se � administrador).

int main(){
	
	// Variaveis
	bool permissao;
	string Adm;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// usu�rio informa se � um administrador 
	cout << "� um administrador ? ";
	cin  >> Adm;
	
	if (Adm == "SIM" || Adm == "sim" || Adm == "Sim"){
		permissao = true;	
	} else {
		permissao = false;
	}
	
	if (permissao == true){
		cout << "O usu�rio � um administrador" << endl;
	} else {
		cout << "O usu�rio n�o � um administrador" << endl;
	}
	
	system("pause");
	return 0;
}
