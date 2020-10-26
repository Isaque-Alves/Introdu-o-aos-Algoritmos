#include <iostream>
using namespace std;

int multiplica(int N1 , int N2){
    if(N1 > 0 and N2 > 1){
        return N1 + multiplica(N1, N2-1);
    }else if (N2== 0){
        return 0;
    }else {
        return N1;
    }
}

int main(){
    int N1, N2;
    cin >> N1 >> N2;
    int result = multiplica(N1, N2);
    cout << result << endl;
    return 0;
}
