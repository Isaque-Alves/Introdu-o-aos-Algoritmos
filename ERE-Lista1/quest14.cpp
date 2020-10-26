#include <iostream>
using namespace std;

int ricci(int i, int N1, int N2){
    if(i==0){
       return N1;
    }else if(i == 1){
        return N2;
    }else{
       return ricci(i-1,N1, N2) + ricci(i-2,N1,N2); 
    }
}

int main(){
    int N1, N2, termos;
    cin >> N1 >> N2;
    cin >> termos;
    int i =0;
    int valor = 0;
    while (i < termos ){
        valor = ricci(i, N1, N2);
        cout << valor << " ";
        i++;
    }
    return 0;
}
