#include <iostream>
using namespace std;

int main(){
    string texto;
    cin >> texto;
    bool achou = false;
    for(int i = 0; i < int(texto.size()) - 1; i ++){
        if(texto[i] != '0'){
            for(int j = i +1; j < int(texto.size()); j++){
                if(texto[i] == texto[j]){
                        texto[j] = '0';
                        achou = true;
                }
            }
        }
        
        if(achou) {
            texto[i] = '0';
        }
        achou = false;
    }
    char letra;
    for(int i = 0; i < int(texto.size()); i++){
        if(texto[i] != '0'){
            letra = texto[i];
            i = texto.size();
        }
    }
    
    cout << letra;
    return 0;
}
