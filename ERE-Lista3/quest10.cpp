#include <iostream>
#include <math.h>
using namespace std;

struct Cliente {
    string nome;
    int x;
    int y;
    int distancia;
    float valor_pizza;
};
    

//exemplo do video do Joaquim
void insertion_sort(Cliente clientes[],int tamanho){
    int j;
    Cliente pivo;
    for(int i = 1; i < tamanho; i++){
        pivo = clientes[i];
        j = i - 1;
        while((j >= 0) and (pivo.distancia < clientes[j].distancia)){
            clientes[j+1] = clientes[j];
            j--;
        }
        
        clientes[j+1] = pivo;
    }
}



int main(){
    int num_clientes_atendidos;
    cin >> num_clientes_atendidos;
    
    int x_pizzaria;
    cin >> x_pizzaria;
    int y_pizzaria;
    cin >> y_pizzaria;
    
    int tamanho;
    cin >> tamanho;
    Cliente clientes[tamanho];
    
    for(int i = 0; i < tamanho; i ++){
        cin >> clientes[i].nome
            >> clientes[i].x
            >> clientes[i].y
            >> clientes[i].valor_pizza;
        clientes[i].distancia = sqrt(pow(clientes[i].x - x_pizzaria,2) + pow(clientes[i].y - y_pizzaria, 2));
    }
    
    insertion_sort(clientes, tamanho);
    
    float soma = 0.0;
    for(int i = 0; i < num_clientes_atendidos; i++){
        soma += clientes[i].valor_pizza;
    }
    
    cout << soma << endl;
    

    return 0;
}
