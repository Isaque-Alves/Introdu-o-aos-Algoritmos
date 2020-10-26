#include <iostream>
using namespace std;

int main() {
	float preco, desconto, prestacao, prestacao_juros;
	cin >> preco;
	desconto = preco - (preco * 0.10);
	prestacao = preco / 5;
	prestacao_juros = preco / 10 + (preco * 0.20) / 10;
	cout << desconto << "\n";
	cout << prestacao << "\n";
	cout << prestacao_juros;
	return 0;
}
