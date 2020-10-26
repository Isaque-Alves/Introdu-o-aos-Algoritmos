#include <iostream>
using namespace std;

int main() {
    int l1;
    cin >> l1;
    string lista1[l1];
    for(int i =0; i < l1; i++) cin >> lista1[i];
    int l2;
    cin >> l2;
    string lista2[l2];
    for(int i = 0; i < l2; i++) cin >> lista2[i];
    bool tem = false, possui = false;
    for (int i = 0; i < l1 ; i++){
        for(int j = 0; j< l2; j++){
            if(lista1[i] == lista2[j]){
                tem = true;
            }
        }
        if(!tem){
            cout << lista1[i] << endl;
            possui = true;
        }
        tem = false;
    }
    if(!possui){
        cout << "NADA";
    }
    return 0;
}
