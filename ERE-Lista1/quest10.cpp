#include <iostream>
#include <iomanip> 
using namespace std;

float soma(int N, float &somatorio){
    int n = 1;
    while(n <= N){
        somatorio = somatorio + (n*(n+1)/(n+3.0));
        n++;
    }
    return somatorio;
}

int main(){
    int N;
    cin >> N;
    float somatorio = 0;
    somatorio = soma(N, somatorio);
    cout << setprecision(4) << somatorio << endl;
    return 0;
}
