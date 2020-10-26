#include <iostream>
using namespace std;

int main() {
	float base_maior, base_menor, altura, area;
	cin >> base_maior;
	cin >> base_menor;
	cin >> altura;
	area = ((base_maior + base_menor) * altura) / 2;
	cout << area;
	return 0;
}
