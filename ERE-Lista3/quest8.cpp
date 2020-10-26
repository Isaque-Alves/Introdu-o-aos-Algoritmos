#include <iostream>
using namespace std;

struct Funcionario {
    int id;
    float horas_trabalhadas;
    float uma_hora_trabalhada;
    float salario;
};

void leitura(Funcionario funcionarios[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cin >> funcionarios[i].id 
            >> funcionarios[i].horas_trabalhadas
            >> funcionarios[i].uma_hora_trabalhada;
        funcionarios[i].salario = funcionarios[i].horas_trabalhadas * funcionarios[i].uma_hora_trabalhada;
    }

}

//exemplo do video do Joaquim
void bubble_sort(Funcionario funcionarios[], int tamanho){
    Funcionario aux;
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - 1 - i; j++){
            if(funcionarios[j].salario > funcionarios[j + 1].salario){
                aux = funcionarios[j];
                funcionarios[j] = funcionarios[j + 1];
                funcionarios[j + 1] = aux;
            }
        }
    }
    
    for(int i = 0; i < tamanho; i ++){
        cout << funcionarios[i].id << " " << funcionarios[i].salario << endl;
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    Funcionario funcionarios[tamanho];
    leitura(funcionarios, tamanho);
    bubble_sort(funcionarios, tamanho);
    
    return 0;
}
