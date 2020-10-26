#include <iostream>
using namespace std;

int termo(int a, int b){
    int sequencia = (a + b);
    return sequencia;
}

int main(){
    int sequencia = 0;
    int a = 0 , b = 1;
    int limite = 0;

    cin >> limite;
    if(limite == 0){
        cout << a << " ";
    }else if(limite == 1){
        cout<< b << " ";
    }else{
        int n = 0;
        while(n < limite)
        {
            if(n == 0){
                cout << "0 ";
            }else if(n == 1){
                cout<< "1 ";
            }else{
                sequencia = termo(a,b);
                cout << sequencia  << " ";
                a = b;
                b = sequencia;
            }
            n++;
        }
    }
    
           
    return 0;
}
