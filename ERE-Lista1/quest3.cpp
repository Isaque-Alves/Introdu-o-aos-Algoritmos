#include <iostream>
using namespace std;

int main(){
    int N1, N2;
    cin >> N1 >> N2;
    if(N1 < N2){
        int inverte = N1;
        N1 = N2;
        N2 = inverte;
    }
    if(N1 % N2 == 0){
        cout << N1;
    }else {
        int num1 = N1;
        while(N1 % N2 != 0){
            N1 = N1 + num1;
        }
        cout << N1;
    }
    return 0;
}
