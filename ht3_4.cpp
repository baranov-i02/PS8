#include<iostream>
#include<vector>
using namespace std;
int main(){
	cout << "Hello, my dear friend!" << endl << "Please, enter your number:" << endl;
	int x,n,p;
	cin >> x;
	vector<int> fact(x);
	vector<int> nums(x);
	fact[0] = 1;
	for (int i = 1; i < x; i++ ){
		fact[i] = 1;
		for (int k = 1; k <= i; k++){
			fact [i] *= k;  
		}
	}
	cout << "Please, enter your number:" << endl;
	cin >> n;
	cout << "Please, enter your number/s:" << endl;
	for (int i = 0; i < n; i++){
		cin >> nums[i];
	}
	for (int i = 0; i < n; i++){
	p = nums[i];
	cout << fact[p] << endl;
	}
	return 0;
}
