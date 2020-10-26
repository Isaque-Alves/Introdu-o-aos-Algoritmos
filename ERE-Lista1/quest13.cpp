#include <iostream>
using namespace std;

int sucessor(int N){
    N++;
    return N;
}

int antecessor(int N){
    N--;
    return N;
}
int soma(int N1, int N2){
    if(N2 != 0 ){
        return soma(sucessor(N1), antecessor(N2));
    }else {
        return N1;
    }
    return 0;
}

int main(){
    int N1, N2;
    cin >> N1;
    cin >> N2;
    if(N1 < 0 and N2 < 0){
        N1 = N1*(-1);
        N2 = N2*(-1);
        cout << soma(N1,N2) * (-1) << endl;
    }else if(N1 < 0){
        
        cout << soma(N1,N2) << endl;
    }else if(N2 < 0){
        int troca = N1;
        N1 = N2;
        N2 = troca;
        cout << soma(N1, N2) << endl;
    }else{
        cout << soma(N1, N2);
    }

    return 0;
}
