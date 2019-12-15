#include<iostream>
#include<vector>
using namespace std;
int main(){
	cout << "Hello, my dear friend!" << endl << "Please, enter your number:" << endl;
	int n,p;
	cin >> n;
	vector<int> nums(n);
	cout << "Please, enter your numbers:" << endl;
	for (int i = 0; i < n; i++ ){
		cin >> nums[i];
	}
	cout << "Please, enter your number:" << endl;
	cin >> p;
	p = nums[p-1];
	if (p % 9 == 1 or p % 9 == -1){
		cout << "Find it!" << endl;
	}
	return 0;
}
