#include <iostream>
using namespace std;

int main(){
    float matriz[4][4];
    for(int i =0 ; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> matriz[i][j];
        }
    }
    int cidades;
    cin >> cidades;
    int vetor[cidades];
    for(int i = 0 ; i < cidades; i ++) cin >> vetor[i];
    float soma = 0.0;
    int cord_i = 0, cord_j = 0;
    for(int i = 0 ; i < cidades - 1; i++){
        cord_i = vetor[i];
        cord_j = vetor[i+1];
        soma += matriz[cord_i][cord_j];
    }
    
    cout << soma << endl;
    return 0;
}
