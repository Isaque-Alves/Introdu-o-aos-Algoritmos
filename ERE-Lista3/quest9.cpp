#include <iostream>
using namespace std;

struct Meme {
    int num_meme;
    string nome_arquivo;
    string assunto;
    string site;
};

void leitura(Meme memes[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cin >> memes[i].num_meme
            >> memes[i].nome_arquivo
            >> memes[i].assunto
            >> memes[i].site;
    }
}

//exemplo do video do Joaquim
void selection_sort(Meme memes[], int tamanho){
    int menor;
    Meme aux;
    for(int indice = 0; indice < tamanho - 1; indice++){
        menor = indice;
        for(int j = indice + 1; j < tamanho; j++){
            if(memes[j].num_meme < memes[menor].num_meme){
                menor = j;
            }
        }
        aux = memes[indice];
        memes[indice] = memes[menor];
        memes[menor] = aux;
    }
}

void imprime_memes(Meme memes[], int tamanho, string site){
    bool achou = false;
    for(int i = 0; i < tamanho; i++){
        if(memes[i].site == site){
            cout << memes[i].num_meme << " "
                 << memes[i].nome_arquivo << " "
                 << memes[i].assunto << " "
                 << memes[i].site << endl;
                 
            achou = true;
        }
    }
    
    if(not achou){
        cout << "Inexistente" << endl;
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    Meme memes[tamanho];
    leitura(memes, tamanho);
    selection_sort(memes, tamanho);
    
    string site;
    cin >> site;
    imprime_memes(memes, tamanho, site);
    
    
    return 0;
}
