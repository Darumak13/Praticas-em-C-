#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para responder a uma pergunta com "sim" ou "n�o".
// Crie uma vari�vel l�gica para verificar se a resposta foi "sim".

int main(){
	
	// Variaveis
	string resp;
	bool verificaResp;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio reponde a pergunta
	cout << "Responda a pergunta:";
	cout << "\n";
	cout << "Voc� � maior de idade ? ";
	cin  >> resp;
	
	if (resp == "sim"){
		verificaResp = true;
	} else
		if (resp == "n�o" || resp == "nao") {
		verificaResp = false;
	}
	
	if(verificaResp == true){
		cout << "Ele � maior idade " << resp << endl;
	} else
		  if (verificaResp == false) {
					cout << "Ele n�o � maior de idade " << resp << endl;
	} else 
		cout << "Reposta invalida: " << resp << endl;
	
	
	system("pause");
	return 0;	
}
