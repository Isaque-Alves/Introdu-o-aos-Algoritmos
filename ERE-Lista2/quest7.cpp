#include <iostream>
using namespace std;

int busca_binaria(int vetor[], int N, int busca, int substituicao){
    int i = 0;
    int f = N -1;
    int meio, comp = 0;
    
    while(i <= f){
        meio = (i + f)/2;
        comp++;
        if(vetor[meio] == busca){
            vetor[meio] = substituicao;
            return comp;
        } else {
            if(busca > vetor[meio]){
                i = meio+1;
            }else{
                f = meio-1;
            }
        }
    }
    return comp;
}


int main(){
    int N;
    cin >> N;
    int vetor[N];
    for(int i = 0; i < N; i ++) cin >> vetor[i];
    int busca;
    cin >> busca;
    int substituicao;
    cin >> substituicao;
    int comp = busca_binaria(vetor, N, busca, substituicao);
    for(int i = 0; i < N; i++) cout << vetor[i] << " ";
    cout << endl << comp;
    return 0;
}
