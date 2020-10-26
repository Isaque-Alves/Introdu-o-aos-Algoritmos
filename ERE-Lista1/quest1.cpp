#include <iostream> 
using namespace std;

int main() {
    float produto;
    cin >> produto;
    if(produto < 50){
        produto = produto*1.05;
    }else if(produto <= 100) {
        produto = produto*1.10;
    }else{
        produto = produto*1.15;
    }
    
    if(produto < 80){
        cout << produto<< endl;
        cout << "Barato"<< endl;
    }else if(produto <= 120){
        cout << produto<< endl;
        cout << "Normal"<< endl;
    }else if(produto <= 200){
        cout << produto<< endl;
        cout << "Caro"<< endl;
    }else{
        cout << produto<< endl;
        cout << "Muito caro"<< endl;
    }
    return 0;
}
