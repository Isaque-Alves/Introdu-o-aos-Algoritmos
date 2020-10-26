#include <iostream>
using namespace std;

struct Figurinha {
    string nome_jogador;
    int num_figurinha;
    int qtde_exemplares;
};

void leitura(Figurinha figurinhas[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cin >> figurinhas[i].num_figurinha 
            >> figurinhas[i].nome_jogador
            >> figurinhas[i].qtde_exemplares;   
    }
}

//exemplo do video do Joaquim
void selection_sort(Figurinha figurinhas[], int tamanho){
    int menor;
    Figurinha aux;
    for(int indice = 0; indice < tamanho - 1; indice++){
        menor = indice;
        for(int j = indice + 1; j < tamanho; j++){
            if(figurinhas[j].num_figurinha < figurinhas[menor].num_figurinha){
                menor = j;
            }
        }
        aux = figurinhas[indice];
        figurinhas[indice] = figurinhas[menor];
        figurinhas[menor] = aux;
    }
}

void procura_elemento(Figurinha figurinhas[], int tamanho){
    int valor;
    cin >> valor;
    bool achou = false;
    for(int i = 0; i < tamanho; i++){
        if(valor == figurinhas[i].num_figurinha){
            cout << i << endl;
            cout << figurinhas[i].nome_jogador << " "
                 << figurinhas[i].qtde_exemplares;
            achou = true;
            i = tamanho;
        }
    }
    
    if(not achou){
        cout << "-1" << endl;
    }
}


int main(){
    int tamanho;
    cin >> tamanho;
    Figurinha figurinhas[tamanho];
    leitura(figurinhas, tamanho);
    selection_sort(figurinhas, tamanho);
    procura_elemento(figurinhas, tamanho);
    
    return 0;
}
