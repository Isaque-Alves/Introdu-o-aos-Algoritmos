#include <iostream>
using namespace std;

int main() {
	int n_lados, n_diagonais;
	cin >> n_lados;
	n_diagonais = (n_lados * (n_lados - 3)) / 2;

	cout << n_diagonais;
	return 0;
}
