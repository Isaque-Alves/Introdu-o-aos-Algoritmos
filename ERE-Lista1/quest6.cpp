#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int quartos[N];
    int i = 0;
    while (i < N){
        quartos[i] = 1;
        i++;
    }
    int multiplo = 0;
    int neto = 1, c = 1;
    while (neto <= N){
        c = 1;
        multiplo = neto;
        while(c <= N){
            multiplo = neto * c;
            if(multiplo <= N){
                quartos[multiplo -1] = quartos[multiplo -1]*(-1);
            }
            c ++;
        }
        neto++;
    }
    c = 0;
    while(c < N){
        if(quartos[c] == (-1)){
            cout << c+1 << " ";
        }
        c++;
    }
    return 0;
}
