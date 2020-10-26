#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Animal {
    int identificador;
    string nome;
    string nome_dono;
    Data ultima_vacina;
};

int busca_binaria(Animal animais[], int tamanho, int id_busca){
    int i = 0;
    int f = tamanho - 1;
    int meio;
    while(i <= f){
        meio = (i + f)/2;
        if(animais[meio].identificador == id_busca){
            cout << animais[meio].nome << " " 
                 << animais[meio].ultima_vacina.dia << "/"
                 << animais[meio].ultima_vacina.mes << "/"
                 << animais[meio].ultima_vacina.ano << endl;
            return 1;
        } else {
            if(id_busca > animais[meio].identificador){
                i = meio + 1;
            }else {
                f = meio - 1;
            }
        }
    }
    return 0;

}

int main(){
    Animal animais[100];
    int id = 0, tamanho = 0, i = 0;
    do{
        cin >> id;
        if(id != 0){
            animais[tamanho].identificador = id;
            cin >> animais[tamanho].nome
                >> animais[tamanho].nome_dono
                >> animais[tamanho].ultima_vacina.dia
                >> animais[tamanho].ultima_vacina.mes
                >> animais[tamanho].ultima_vacina.ano;
            tamanho += 1;
            i++;
        }else {
            i = 100;
        }
    } while(i < 100);
    int id_busca;
    cin >> id_busca;
    
    if(tamanho > 0){
       int valor = busca_binaria(animais, tamanho, id_busca);
       if(valor == 0){
            cout << "inexistente" << endl;
       }
    }else {
        cout << "inexistente" << endl;
    }
    
    return 0;
}
