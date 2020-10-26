#include <iostream>
using namespace std;

void inverter(int i, int N){
    if(i <= N){
        int num;
        cin >> num;
        inverter(i+1, N);
        cout << num << " ";
    }
}


int main(){
    int quantidade;
    cin >> quantidade;
    int i = 1;
    inverter(i, quantidade);
    return 0;
    
}
