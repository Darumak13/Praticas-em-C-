#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a ao usu�rio para digitar um n�mero de 1 a 12 
// e mostre o m�s correspondente.

int main(){
	
	// Inicializa��o de variaveis
	int Mes;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Usu�rio escolhe um n�mero de 1 a 12
	
	cout << "Escolha um n�mero de 1 � 12: ";
	cin  >> Mes;
	
	switch(Mes) {
		
		case 1: 
			cout << "JANEIRO";
			
		break;

		case 2: 
			cout << "Fevereiro";
			
		break;
		
		case 3: 
			cout << "Mar�o";
	
		break;
			
		case 4: 
			cout << "Abril";
			
		break;
		
		case 5: 
			cout << "Maio";
			
		break;
			
		case 6: 
			cout << "Junho";
			
		break;
			
		case 7: 
			cout << "Julho";
			
		break;
		
		case 8: 
			cout << "Agosto";
			
		break;

		case 9: 
			cout << "Setembro";
			
		break;
			
		case 10: 
			cout << "Outubro";
			
		break;	
			
		case 11: 
			cout << "Novembro";
			
		break;
			
		case 12: 
			cout << "Dezembro";
			
		break;
			
		default:
			cout << "Op��o invalida";
	}
	
	system("pause");
	
	return 0;
}
