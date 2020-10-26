#include <iostream>
using namespace std;

struct Atleta {
    float time[8];
};

int main(){

    Atleta *atletas = new Atleta;
    
    for(int i = 0; i < 8; i++) cin >> atletas->time[i];

    float menor = atletas->time[0];
    int posicao = 0;
    for(int i = 1; i < 8; i ++){
        if(atletas->time[i] < menor){
            menor = atletas->time[i];
            posicao = i;
        }
    }

    float *diferenca = new float[8];
    diferenca[posicao] = menor;

    for(int i = 0; i < 8; i++){
        if(i != posicao){
            diferenca[i] = atletas->time[i] - menor;
        }
    }

    for(int i = 0; i < 8; i ++){
        cout << diferenca[i] << endl;
    }

    delete atletas;
    delete[] diferenca;

    return 0;
}
