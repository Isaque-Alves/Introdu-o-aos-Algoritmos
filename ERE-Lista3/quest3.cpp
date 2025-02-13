#include <iostream>
using namespace std;

struct Pokemon {
    string nome;
    int ataque;
    int defesa;
};

struct Treinador {
    string nome;
    Pokemon pokemons[3];
};

void duelo(Treinador treinador_atacante, Treinador treinador_defensor,
            string &pok_ataque, string &pok_defesa, int &ataque, int &defesa){
                
    ataque = treinador_atacante.pokemons[0].ataque;
    pok_ataque = treinador_atacante.pokemons[0].nome;
    
    defesa = treinador_defensor.pokemons[0].defesa;
    pok_defesa = treinador_defensor.pokemons[0].nome;
    
    for(int i = 1; i < 3; i ++){
        if(treinador_atacante.pokemons[i].ataque > ataque){
            ataque = treinador_atacante.pokemons[i].ataque;
            pok_ataque = treinador_atacante.pokemons[i].nome;
        }
        
        if(treinador_defensor.pokemons[i].defesa > defesa){
            defesa = treinador_defensor.pokemons[i].defesa;
            pok_defesa = treinador_defensor.pokemons[i].nome;
        }
    }
    

}

int main(){
    int quantidade;
    cin >> quantidade;
    
    Treinador treinadores[quantidade];
    
    for(int i = 0; i < quantidade; i ++){
        cin >> treinadores[i].nome;
        for(int j = 0; j < 3; j++){
            cin >> treinadores[i].pokemons[j].nome
                >> treinadores[i].pokemons[j].ataque
                >> treinadores[i].pokemons[j].defesa;
        }
        cout << endl;
    }
    
    int atacante, defensor;
    cin >> atacante >> defensor;
    string pokemon_atacante, pokemon_defensor;
    int ataque = 0, defesa = 0;
    duelo(treinadores[atacante], treinadores[defensor],
            pokemon_atacante, pokemon_defensor, ataque, defesa);
            
    
    if(ataque > defesa){
        cout << treinadores[atacante].nome << endl;
        cout << pokemon_atacante;
    }else {
        cout << treinadores[defensor].nome << endl;
        cout << pokemon_defensor;
    }

    return 0;
}
