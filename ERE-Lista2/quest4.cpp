#include <iostream>
using namespace std;

int main(){
    string texto;
    cin >> texto;
    string busca;
    cin >> busca;
    bool achou = false;
    int posicao = -1;
    for(int i = 0; i < int(texto.size()); i++){
        if(texto[i] == busca[0]){
            if(int(busca.size()) == 1){
                achou = true;
            }else{
                for(int j = 1; j < int(busca.size()); j++){
                    if(texto[i+j] == busca[j]){
                        achou = true;
                    }else{
                        achou = false;
                        j= busca.size();
                    }
                }
            }
            
        }
        
        if(achou){
            posicao = i;
            i = texto.size();
        }
    }
    
    cout << posicao << endl;
    return 0;
}
