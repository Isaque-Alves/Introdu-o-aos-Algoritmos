#include <iostream>
using namespace std;

int main(){
    int dimensao;
    cin >> dimensao;
    int matriz[dimensao][dimensao];
    for(int i = 0; i < dimensao; i++){
        for(int j = 0; j < dimensao; j++){
            cin >> matriz[i][j];
        }
    }
    int locais = 0;
    for(int i = 0 ; i < dimensao; i++){
        for(int j = 0; j < dimensao; j++){
            if(matriz[i][j] == 0 and j + 4 < dimensao){
                if(matriz[i][j+4] == 0){
                    locais++;
                }
            }
        }
    }
    
    cout << locais;
    
    return 0;
}
