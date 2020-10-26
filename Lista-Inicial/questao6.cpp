#include <iostream>
using namespace std;

int main() {
	int valor, n_cinquenta = 0, n_dez = 0, n_cinco = 0, n_um = 0;
	cin >> valor;
	while (valor != 0) {
		if (valor >= 50) {
			valor = valor - 50;
			n_cinquenta += 1;
		}
		else if (valor >= 10) {
			valor = valor - 10;
			n_dez += 1;
		}
		else if (valor >= 5 ) {
			valor = valor - 5;
			n_cinco += 1;
		}else if(valor >= 1){
			valor = valor - 1;
			n_um += 1;
		}
	}
	cout << n_cinquenta << "\n";
	cout << n_dez << "\n";
	cout << n_cinco << "\n";
	cout << n_um;
	return 0;
}
