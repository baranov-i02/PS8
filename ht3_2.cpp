#include<iostream>
using namespace std;
int main(){
	int a, b, x, y, p;
	p = 1;
	cout << "Hello, my dear friend!" << endl << "Please, enter your numbers:" << endl;
	cin >> a >> b >> x >> y;
	for (int i = a; i <= b; i++){
		if (i % 2 == 0 and i % 3 == 0){
			p *= i;
		}
	}
	cout << p << endl;
	p = 0;
	for (int i = x; i <= y; i++){
		if (i % 13 == 0){
			p += i;
		}
	}
	cout << p << endl;
	return 0;
}
