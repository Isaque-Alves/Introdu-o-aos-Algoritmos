#include <iostream>
using namespace std;


struct doador {
    string nome;
    string tipo_sanquineo;

};

void verifica_A_B(doador doadores[], string tipo_comparado, int quantidade){
    for(int i = 0; i < quantidade; i++){
        if(doadores[i].tipo_sanquineo == tipo_comparado){
            cout << doadores[i].nome << endl;
        }
    }
    
    for(int i = 0; i < quantidade; i++){
        if(doadores[i].tipo_sanquineo == "O"){
            cout << doadores[i].nome << endl;
        }
    
    }
}

int main(){
    int quantidade;
    cin >> quantidade;
    doador doadores[quantidade];
    
    for(int i = 0; i < quantidade; i++){
        cin >> doadores[i].nome
            >> doadores[i].tipo_sanquineo;
    }
    
    string tipo_comparado;
    cin >> tipo_comparado;
    
    if(tipo_comparado == "A" or tipo_comparado == "B"){
        verifica_A_B(doadores, tipo_comparado, quantidade);
        
    }else if(tipo_comparado == "O"){
        for(int i = 0; i < quantidade; i++){
            if(doadores[i].tipo_sanquineo == tipo_comparado){
                cout << doadores[i].nome << endl;
            }
        }
    }else {
        for(int i = 0; i < quantidade; i++){
            if(doadores[i].tipo_sanquineo == tipo_comparado){
                cout << doadores[i].nome << endl;
            }
        }
        
        for(int i = 0; i < quantidade; i++){
            if(doadores[i].tipo_sanquineo == "A"){
                cout << doadores[i].nome << endl;
            }
        }
        
        for(int i = 0; i < quantidade; i++){
            if(doadores[i].tipo_sanquineo == "B"){
                cout << doadores[i].nome << endl;
            }
        }
        
        for(int i = 0; i < quantidade; i++){
            if(doadores[i].tipo_sanquineo == "O"){
                cout << doadores[i].nome << endl;
            }
        }
    
    }
    
    
    
    
    return 0;
}

