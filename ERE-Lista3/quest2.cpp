#include <iostream>
using namespace std; 


struct Stormtrooper {
    string nome;
    string planeta_origem;
    int batalhas;
};

struct planeta {
    string nome;
    int num_Storm;
    float media_batalhas;
};

int main(){
    int quantidade;
    cin >> quantidade;
    
    Stormtrooper Stroms[quantidade];
    
    for(int i = 0; i < quantidade; i ++){
        cin >> Stroms[i].nome 
            >> Stroms[i].planeta_origem
            >> Stroms[i].batalhas;
    }
    
    planeta planetas[quantidade];
    int aloca = 0;
    bool achou = false;
    for(int i = 0; i < quantidade; i++){
        for(int j = 0; j < quantidade; j++){
            if(Stroms[i].planeta_origem == planetas[j].nome){
                planetas[j].num_Storm += 1;
                planetas[j].media_batalhas += float(Stroms[i].batalhas);
                achou = true;
            }
        }
        
        if(not achou){
            planetas[aloca].nome = Stroms[i].planeta_origem;
            planetas[aloca].num_Storm = 1;
            planetas[aloca].media_batalhas += float(Stroms[i].batalhas);
            aloca ++;
        }
        
        achou = false;
    }
    
    for(int i = 0; i < aloca; i ++){
        planetas[i].media_batalhas = planetas[i].media_batalhas / planetas[i].num_Storm;
    }
    
    for(int i = 0; i < aloca; i ++){
        cout << planetas[i].nome << " "
             << planetas[i].num_Storm << " "
             << planetas[i].media_batalhas << endl;
    }

    return 0;
}
