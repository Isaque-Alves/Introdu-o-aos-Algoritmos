#include <iostream>
using namespace std;

int main(){
    int num , i = 1, quant = 0, positivo = 0, negativo = 0, soma = 0;
    float media, percentual_positivo, percentual_negativo;
     
    while(i != 0){
        cin >> num;
        if(num == 0){
            i = num;
        }else {
            quant = quant + 1;
            if(num > 0){
                positivo += 1;
            }else {
                negativo += 1;
            }
            soma += num;
        }
    } 

    media = float(soma)/quant;
    percentual_positivo =float(positivo)/quant;
    percentual_negativo = float(negativo)/quant;
    cout << media << endl;
    cout << positivo << endl;
    cout << negativo << endl;
    cout << percentual_positivo  << endl;
    cout << percentual_negativo << endl;
    return 0;
}
