#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    int k;
    cin >> k;
    for(int i = 0; i < 10; i++) vetor[i] = 0;
    for(int i = 0; i < k; i++) cin >> vetor[i];
    int novo;
    cin >> novo;
    int posicao;
    cin >> posicao;
    for (int i = 9; i >= posicao ; i--){
        if(i == posicao){
            vetor[i] = novo;
        }else{
            vetor[i] = vetor[i-1];
        }
    }
    for(int i = 0; i < 10; i++) cout << vetor[i] << " ";
    
    return 0;
}
