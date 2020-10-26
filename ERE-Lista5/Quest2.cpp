#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream arquivo("tropas.txt");

    if(arquivo){
        char westeros, inimigo;
        arquivo >> westeros >> inimigo;
        int quant;
        arquivo >> quant;

        char matriz[10][10];
        int x, y;

        for(int i = 0; i < quant; i++){
            arquivo >> x >> y;
            matriz[x][y] = westeros;
        }
        arquivo >> quant;

        for(int i = 0; i < quant; i++){
            arquivo >> x >> y;
            matriz[x][y] = inimigo;
        }

        char caracter_vazio ;
        arquivo >> caracter_vazio;
        int contador_westeros = 0, contador_inimigo = 0;
        string frentes_batalhas = "";
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if((matriz[i][j] != westeros) and (matriz[i][j] != inimigo)){
                    matriz[i][j] = caracter_vazio;
                }

                if(matriz[i][j] == westeros) {
                    contador_westeros ++;
                }else if(matriz[i][j] == inimigo){
                    contador_inimigo ++;
                }
            }

            if(contador_westeros > contador_inimigo){
                frentes_batalhas += to_string(i) + " ";
            }
            contador_inimigo = 0, contador_westeros = 0;
        }

        for(int i = 0; i < 10; i ++){
            for(int j = 0; j < 10; j ++){
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }

        cout << westeros << ": " << frentes_batalhas << endl;
        
    

    }

    return 0;
}