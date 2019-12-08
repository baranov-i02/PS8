#include <iostream>
using namespace std;
int main()
{
	int i, x;
	i = 1;
	cout << "Hello, dear friend!\n" << "Please, enter your number X: ";
	cin >> x;
	while (i < x)
	{
		cout << i << " ";
		i +=1;
	}
	return 0;
}

