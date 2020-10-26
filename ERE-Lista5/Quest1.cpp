#include <iostream>
#include <fstream>
using namespace std;


int main(){
    string nome;
    cin >> nome;
    ifstream entrada(nome);
    ofstream cifra("cifrado.txt");

    if(entrada){
        string dado;
        while(getline(entrada, dado)){
            for(int i = 0; i < int(dado.size()); i++){
                if(dado[i] != ' '){
                    dado[i] = 'Z' - dado[i] + 'A';      
                }
            }
            cifra << dado << endl;
        }
    }

    return 0;
}