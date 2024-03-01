#include <iostream>
#include <math.h>

using namespace std;
int main() {
	
	double area, raio;
	
	// Informe o valor do raio
	cout << "Informe o valor do raio: ";
	cin >> raio;	
	
	//	Faz o calculo da area do raio
	area = 3,1415 * pow(raio,2);
	
	// Imprime a area do raio
	cout << "A area do raio e = " << area;
	
	system("pause");
	return 0;
}
