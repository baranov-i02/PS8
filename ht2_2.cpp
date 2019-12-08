#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "Hello, dear friend!\n" << "Please, enter your number X: ";
	cin >> x;
	y = (x*x*x*x*x + x*x*x*x + x*x*x + x*x + 25);
	cout << "F(X) = "<< y;
	return 0;
}

