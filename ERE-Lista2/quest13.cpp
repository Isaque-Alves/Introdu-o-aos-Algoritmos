#include <iostream>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    int tabuleiro[tamanho][tamanho];
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cin >> tabuleiro[i][j];
        }
    }
    int i_cavalo = 0, j_cavalo = 0;
    
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(tabuleiro[i][j] == 1){
               i_cavalo = i;
               j_cavalo = j;
               i = tamanho;
               j = tamanho; 
            }
        }
    }
    int peoes = 0;
    if(i_cavalo - 2 >= 0){
        if(j_cavalo + 1 < tamanho){
            if(tabuleiro[i_cavalo-2][j_cavalo+1] == 2){
                peoes ++;
            }
        }
        
        if(j_cavalo - 1 >=0){
            if(tabuleiro[i_cavalo-2][j_cavalo-1] == 2){
                peoes ++;
            }
        }
    }
    
    if(j_cavalo + 2 < tamanho){
        if(i_cavalo - 1 >=0){
            if(tabuleiro[i_cavalo - 1][j_cavalo + 2] == 2){
                peoes++;

            }
        }
        
        if(i_cavalo +1 < tamanho){
            if(tabuleiro[i_cavalo + 1][j_cavalo + 2] == 2){
                peoes++;

            }
        }
    }
    
    if(i_cavalo + 2 < tamanho){
        if(j_cavalo + 1 < tamanho){
            if(tabuleiro[i_cavalo+2][j_cavalo +1] == 2){
                peoes ++;
 
            }
        }
        if(j_cavalo - 1 >= 0){
            if(tabuleiro[i_cavalo + 2][j_cavalo - 1] == 2){
                peoes ++; 
            }
        }
    }
    
    if(j_cavalo - 2 >= 0){
        if(i_cavalo - 1 >=0){
            if(tabuleiro[i_cavalo - 1][j_cavalo - 2] == 2){
                peoes ++;
            }
        }
        
        if(i_cavalo + 1 < tamanho){
            if(tabuleiro[i_cavalo + 1][j_cavalo -2 ] == 2){
                peoes ++;
            }
        }
    }
    
    cout << peoes;
    return 0;
}
