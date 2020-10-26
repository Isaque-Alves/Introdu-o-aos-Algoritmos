#include <iostream>
using namespace std;

int main(){
    int dimensoes;
    cin >> dimensoes;
    float matriz[dimensoes][dimensoes];
    for(int i = 0; i < dimensoes; i++){
        for(int j = 0; j < dimensoes; j++){
            cin >> matriz[i][j];
        }
    }
    float limite;
    cin >> limite;
    float custo_unid;
    cin >> custo_unid;
    float valor = 0.0;
    for(int i = 0; i < dimensoes; i++){
        for(int j = 0; j < dimensoes; j++){
            if(matriz[i][j] < limite){
               valor += ((limite - matriz[i][j] ) * custo_unid); 
            }
        }
    }
    
    cout << valor;
    return 0;
}
