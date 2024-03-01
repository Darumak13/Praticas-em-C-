#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que exiba as potências de 2 de 1 a 10.

int main(){
	
	int Resul = 0;
	
	setlocale(LC_CTYPE, "PORTUGUESE");

	for (int i = 1 ; i <= 10 ; i ++){
		Resul = pow(2,i);
		cout << " 2 ^ " << i << " = " << Resul << endl;  
	}
	
	system("pause");
	return 0;
	
}
