#include <iostream>
using namespace std;

void preenche_vetor(float *vetor , int km){
    for(int i = 0; i < km; i++){
        cin >> vetor[i];
    }
}

int main() {
    int km;
    cin >> km;
    string nome1;
    cin >> nome1;
    float vetor1[km];
    preenche_vetor(vetor1, km);
    string nome2;
    cin >> nome2;
    float vetor2[km];
    preenche_vetor(vetor2, km);
    for(int i = 0; i < km; i ++){
        if(vetor1[i] < vetor2[i]){
            cout << nome1 << " ";
        }else{
            cout << nome2 << " ";
        }
    }
    cout<< endl;
    for(int i = 0; i < km; i++){
        if(i == 0){
            if(vetor1[i] < vetor2[i]){
                cout << nome1 << " ";
            }else {
                cout << nome2 << " ";
            }
        }else{
            if(vetor1[i] - vetor1[i-1] < vetor2[i] - vetor2[i-1]){
                cout << nome1 << " ";
            }else {
                cout << nome2 << " ";
            }
        }
    }
    return 0;
}
