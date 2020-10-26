#include <iostream>
using namespace std;

int main(){
    int L , C;
    cin >> L >> C;
    int vetor[L][C];
    for (int i = 0; i < L ; i ++){
        for(int j = 0; j < C; j++){
            cin >> vetor[i][j];
        }
    }
    
    int i_reta, j_reta;
    cin >> i_reta >> j_reta;
    int quadrante;
    cin >> quadrante;
    int soma = 0;
    if(quadrante == 1){
        for(int i = 0; i < i_reta; i++){
            for(int j = 0; j < j_reta; j++){
                soma += vetor[i][j];
            }
        }
    }else if(quadrante == 2){
        for(int i = 0; i < i_reta; i++){
            for(int j = j_reta + 1; j < C;j++){
                soma += vetor[i][j];
            }
        }
    }else if(quadrante == 3){
        for(int i = i_reta + 1; i < L; i++){
            for(int j = 0 ; j < j_reta; j++){
                soma += vetor[i][j];
            }
        }
    }else{
        for(int i = i_reta + 1; i < L; i++){
            for(int j = j_reta + 1; j < C; j++){
                soma += vetor[i][j];
            }
        }
    }
    
    cout << soma << endl;
    return 0;
    
}
