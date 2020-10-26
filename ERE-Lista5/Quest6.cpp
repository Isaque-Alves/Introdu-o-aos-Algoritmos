#include <iostream>
#include <fstream>


using namespace std;

struct Hospede{
    char nome[50];
    int id;
    char telefone[12];
};



void insertion_sort(Hospede hospedes[],int tamanho){
    int j;
    Hospede pivo;
    for(int i = 1; i < tamanho; i++){
        pivo = hospedes[i];
        j = i - 1;
        while((j >= 0) and (pivo.id < hospedes[j].id)){
            hospedes[j+1] = hospedes[j];
            j--;
        }
        
        hospedes[j+1] = pivo;
    }
}

int main(){
    fstream arquivo("caravana.bin", ios::out);
    arquivo.close();
    arquivo.open("caravana.bin", ios::in|ios::out|ios::binary);
    Hospede hospede;
    int quantidade;
    cin >> quantidade;
    
    for(int i = 0; i < quantidade; i ++){
        cin >> hospede.nome >> hospede.id >> hospede.telefone;
        arquivo.write((const char *) (&hospede), sizeof(Hospede));
    }
    
    int busca,substituicao;
    cin >> busca >> substituicao;
    
    int i = 0;
    int f = quantidade - 1;
    int meio;
    
    while(i <= f){
        meio = (i + f)/2;
        Hospede h;
        arquivo.seekg(meio*sizeof(Hospede), ios::beg);
        arquivo.read((char *) (&h), sizeof(Hospede));
        if(h.id == busca){
            h.id = substituicao;
            i = f + 1;
            arquivo.seekp(meio*sizeof(Hospede), ios::beg);
            arquivo.write((const char *) (&h), sizeof(Hospede));
        } else {
            if(busca > h.id){
                i = meio+1;
            }else{
                f = meio-1;
            }
        }
    }
    
    Hospede hospedes[quantidade];
    arquivo.seekg(0, ios::beg);
    arquivo.read((char *) (&hospedes), sizeof(hospedes));
        
    
    insertion_sort(hospedes, quantidade);

    arquivo.seekp(0, ios::beg);
    arquivo.write((const char *) (&hospedes), sizeof(hospedes));
    
    i = 0;
    while(i < quantidade){
        cout << hospedes[i].nome << " " << hospedes[i].id << endl;
        i++;
    }
    
    return 0;
    
}
