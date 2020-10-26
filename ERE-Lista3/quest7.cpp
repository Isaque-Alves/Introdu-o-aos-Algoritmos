#include <iostream>
using namespace std;

struct Produto {
    int id;
    string descricao;
    float preco;
};

//exemplo do video do Joaquim
void insertion_sort(Produto produtos[],int tamanho){
    int j;
    Produto pivo;
    for(int i = 1; i < tamanho; i++){
        pivo = produtos[i];
        j = i - 1;
        while((j >= 0) and (pivo.preco < produtos[j].preco)){
            produtos[j+1] = produtos[j];
            j--;
        }
        
        produtos[j+1] = pivo;
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    Produto produtos[tamanho];
    
    for(int i = 0; i < tamanho; i++){
        cin >> produtos[i].id;
        getline(cin.ignore(2, '\n'), produtos[i].descricao);
        cin >> produtos[i].preco;
        cout << endl;
    }
    
    insertion_sort(produtos, tamanho);
    
    float minimo;
    cin >> minimo;
    float maximo;
    cin >> maximo;
    
    bool achou = false;
    for(int i = 0; i < tamanho; i++){
        if((produtos[i].preco >= minimo) and (produtos[i].preco <= maximo)){
            cout << produtos[i].id << " \"" 
                 << produtos[i].descricao << "\" "
                 << produtos[i].preco << endl;
            achou = true;
        }
    }
    
    if(not achou){
        cout << "Inexistente" << endl;
    }
    
    return 0;
}
