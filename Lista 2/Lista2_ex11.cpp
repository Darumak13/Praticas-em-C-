#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a um n�mero e 
// verifique se ele est� dentro do intervalo de 10 a 20 (inclusive)

int main(){
	
	// Inicializa��o de variaveis
	int Num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Informa um n�mero pelo usu�rio
	cout << "Informe um n�mero: ";
	cin  >> Num;
	
	// Condicional para verificar se o n�mero est� entre o intervalo de 10 a 20
	if ((Num >= 10 ) && (Num <= 20)){
		cout << "O n�mero " << Num << " est� entre o intervalo de 10 a 20 \n";
	}else
		cout << "O n�mero " << Num << " n�o est� entre o intervalo de 10 a 20 \n";
		
	system("pause");
	
	return 0;
}
