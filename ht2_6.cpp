#include <iostream>
using namespace std;
int main()
{
	int x,y,z,t,max,min,ra,r,max1,min1,max2,min2,ra1,r1;
	cout << "Hello, dear friend!\n" << "Please, enter your numbers: ";
	cin >> x >> y >> z >> t;
	if (x >= y){
		max1 = x;
		min1 = y;
	}
		else{
		max1 = y;
		min1 = x;
	}
	if (z>=t){
		max2 = z; 
		min2 = t;
	}
		else{
		max2 = t;
		min2 = z;
	}
	if (max1 >= max2){
		max = max1;
		ra = max2;
	}
		else{
		max = max2;
		ra = max1;
	}
	if (min1 >= min2){
		min = max2;
		r = max1;
	}
		else{
		min = max1;
		r = max2;
	}
	if (ra >=r){
		ra1 = ra;
		r1 = r;
	}
		else{
		ra1 = r;
		r1 = ra;
	}
	cout << max << ra1 << r1 << min;
	return 0;
}

