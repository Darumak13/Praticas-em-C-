#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using namespace std;

// Crie um programa que pe�a o nome do aluno e tr�s notas. 
// O programa deve calcular a m�dia das notas e 
// dizer se o aluno foi aprovado ou reprovado.

int main(){
	
	// Inicializa��o das variaveis
	string Aluno;
	int nota1,nota2,nota3;
	double media;
	
	setlocale(LC_CTYPE, "PORTUGUESE");
	
	// Inser��o dos dados do aluno
	cout << "Informe o nome do aluno: ";
	cin >> Aluno;
	
	cout << "\n";
	
	cout << "Informe a 1� nota: ";
	cin >> nota1;
	
	cout<< "\n";
	
	cout << "Informe a 2� nota: ";
	cin >> nota2;
	
	cout<< "\n";
	
	cout << "Informe a 3� nota: ";
	cin >> nota3;
	
	cout<< "\n";
	
	// Calculo da m�dia das nota
	media = (nota1 + nota2 + nota3)/3;
	
	// Condicional para avaliar se o aluno foi aprovado ou n�o
	if(media >= 6){
		cout << "O aluno " << Aluno << " foi aprovado \n";
	}else
		cout << "O aluno " << Aluno << " foi reprovado \n";

	system("pause");
	
	return 0;
}
