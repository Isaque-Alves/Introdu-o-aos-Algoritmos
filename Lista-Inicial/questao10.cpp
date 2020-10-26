#include <iostream>
using namespace std;

int main() {
	float salario_minimo, salario_bruto, salario;
	int horas;
	cin >> salario_minimo;
	cin >> horas;
	salario_bruto = horas * (salario_minimo * 0.05);
	salario = salario_bruto - (salario_bruto * 0.23);
    cout << salario;
	return 0;
}
