#include <iostream>
using namespace std;

int main() {
	float salario_base, salario_liquido;
	cin >> salario_base;
	salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07);
    cout << salario_liquido;
	return 0;
}
