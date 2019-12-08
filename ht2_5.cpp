#include <iostream>
using namespace std;
int main()
{
	int x,y,z,min,max,r;
	cout << "Hello, dear friend!\n" << "Please, enter your numbers: ";
	cin >> x >> y >> z;
	if (x >= y and x >= z){
		max = x;
		if (y >= z){
			r = y;
			min = z;
		}
		else{
			r = z;
			min = y;	
		}
	} 
	if (y >= x and y>=z){
		max = y;		
		if (x >= z){
			r = x;
			min = z;
		}
		else{
			r = z;
			min = x;	
		}
	}
	if (z >= x and z>=y){
		max = z;		
		if (x >= y){
			r = x;
			min = y;
		}
		else{
			r = y;
			min = x;	
		}
	}
	cout << max << r << min;
	return 0;
	
}

