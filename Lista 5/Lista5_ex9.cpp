#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que peça ao usuário para responder a uma pergunta com "sim" ou "não".
// Crie uma variável lógica para verificar se a resposta foi "sim".

int main(){
	
	// Variaveis
	string resp;
	bool verificaResp;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usuário reponde a pergunta
	cout << "Responda a pergunta:";
	cout << "\n";
	cout << "Você é maior de idade ? ";
	cin  >> resp;
	
	if (resp == "sim"){
		verificaResp = true;
	} else
		if (resp == "não" || resp == "nao") {
		verificaResp = false;
	}
	
	if(verificaResp == true){
		cout << "Ele é maior idade " << resp << endl;
	} else
		  if (verificaResp == false) {
					cout << "Ele não é maior de idade " << resp << endl;
	} else 
		cout << "Reposta invalida: " << resp << endl;
	
	
	system("pause");
	return 0;	
}
