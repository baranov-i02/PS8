#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cout << "Hello, my friend!" << endl << "Please, enter your number:" << endl;
	cin >> n;	 
	cout << "We need your name! Please, enter your name:" << endl;
	string name;
	cin >> name;
	if (n %2 ==0){
		for (int i=0; i<n; i++){
			cout << name << endl;
		}
	}
	else{
		cout << "C++ is very cool!";
	}
	return 0;
}
