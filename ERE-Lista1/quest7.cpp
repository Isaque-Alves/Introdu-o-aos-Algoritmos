#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 1, j = 1;
    bool caractere = true;
    while(i <=N ){
        while(j <= i){
            if(caractere){
                cout << "@" ;
                caractere = false;
            }else{
                cout << "#";
                caractere = true;
            }
            j++;
        }
        cout << endl;
        i++;
        j= 1;
        caractere = true;
    }

    return 0;
}
