#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float numero, quadrado, cubo, raiz;
	cin >> numero;
	quadrado = numero * numero;
	cubo = numero * numero * numero;
	raiz = sqrt(numero);

	cout << quadrado << "\n";
	cout << cubo << "\n";
	cout << raiz;
	return 0;
}
