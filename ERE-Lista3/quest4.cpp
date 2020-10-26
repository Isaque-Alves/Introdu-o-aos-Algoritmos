#include <iostream>
using namespace std;

struct Ponto {
    int X;
    int Y;
};

struct Retangulo {
    Ponto V1;
    Ponto V2;
};


int main(){
    
    Ponto P;
    cin >> P.X >> P.Y;
    
    int quantidade;
    cin >> quantidade;
    Retangulo retangulos[quantidade];
    
    for(int i = 0; i < quantidade; i ++){
        cin >> retangulos[i].V1.X >> retangulos[i].V1.Y
            >> retangulos[i].V2.X >> retangulos[i].V2.Y;
    }
    
    int qtde_retangulos = 0;
    
    for(int i = 0; i < quantidade; i++){
        if(P.X >= retangulos[i].V1.X and P.X <= retangulos[i].V2.X){
            if(P.Y >= retangulos[i].V1.Y and P.Y <= retangulos[i].V2.Y){
                qtde_retangulos += 1;
            }
        }
    }
    
    cout << qtde_retangulos << endl;
    
    return 0;
}
