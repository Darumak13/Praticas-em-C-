#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a um n�mero ao usu�rio e 
// determine se ele � positivo.

int main(){
	
	// Inicializa��o das variveis
	int Num;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inser��o do n�mero do usu�rio
	cout << "Informe um n�mero: ";
	cin  >> Num;
	
	// Condi��o para verificar se o n�mero � positivo
	if (Num >= 0){
		cout << "O n�mero " << Num << " � positivo \n";
	}else
		cout << "O n�mero " << Num << " � negativo \n";
		
	system("pause");
	
	return 0;

}
