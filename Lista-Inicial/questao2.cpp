#include <iostream>
using namespace std;

int main() {
	float vr, d , e , l ;
	cin >> vr;
	d = vr / 2.13;
	e = vr / 2.84;
	l = vr / 3.34;
	cout << d << fixed << setprecision(2) << "\n colwee"
		 << e << fixed << setprecision(2) << "\n" 
		 << l << fixed << setprecision(2);
	return 0;
}