#include <iostream>
#include <math.h>  
using namespace std;

float montante(float C, float i, int t){
    i = i/100;
    float M = C * pow((1+i), t);
    return M;
}


int main(){
    float C;
    cin >> C;
    float i;
    cin >> i;
    float t;
    cin >> t;
    float M = montante(C,i,t);
    cout << M << endl;
    return 0;
}
