#include <iostream>
using namespace std;

int main(){
    string nomes[10];
    int vendas[10];
    float comissao[10];
    
    for(int i = 0; i < 10; i++) cin >> nomes[i] >> vendas[i] >> comissao[i];
    int soma = 0, maior = vendas[0]* comissao[0];
    int nome = 0;
    for(int i=0; i <10; i++){
        cout << nomes[i] << " ";
        cout << vendas[i]*comissao[i] << endl;
        soma += vendas[i];
        if(vendas[i]*comissao[i] > maior){
            maior = vendas[i]*comissao[i];
            nome = i;
        }
    }
    
    cout << endl << soma << endl;
    cout << nomes[nome] << " " << vendas[nome]*comissao[nome];
    
    
    return 0;
}
