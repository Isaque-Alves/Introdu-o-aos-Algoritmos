#include <iostream>
using namespace std;

int main() {
    double thanos, thor;
    int golpes = 0;
    cin >> thanos;
    cin >> thor;
    while(thor > thanos){
        thanos = thanos - (thanos*0.02);
        thor = thor - (thor*0.06);
        golpes ++;
        
    }
    cout << golpes << endl;
    return 0;
}
