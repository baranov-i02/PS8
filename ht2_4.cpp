#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x;
	string name;
	cout << "Hello, dear friend!\n" << "Please, enter your number: ";
	cin >> x;
	cout << "Please, enter your text: ";
	cin >> name;
	for (int i = 1; i <= x; i++)
	{
		cout << name << " ";
	}
	return 0;
}

