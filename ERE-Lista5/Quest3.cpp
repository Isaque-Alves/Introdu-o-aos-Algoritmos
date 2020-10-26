#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char vetor1[100], vetor2[100];

    cin.getline(vetor1,100);
    cin.getline(vetor2,100);

    int tamanho = strlen(vetor1) + strlen(vetor2);

    char *vetor_resultante = new char[tamanho];

    memcpy(vetor_resultante, vetor1, strlen(vetor1));
    vetor_resultante[strlen(vetor1)] = ' '; // espaçamento para o próximo vetor;
    memcpy(&vetor_resultante[strlen(vetor1) + 1], vetor2, strlen(vetor2));

    for(unsigned int i = 0; i < strlen(vetor_resultante); i ++){
        cout << vetor_resultante[i];
    }
    cout << endl;

    delete[] vetor_resultante;
    return 0;
}
