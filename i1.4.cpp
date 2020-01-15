#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a,b,c,d,max,min;
	
	cout << "‚ведите A,B,C и D:"<<endl;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	if (abs(a) > abs(b)) {
		min = abs(b);
	}
	else {
		min = abs(c);
	}

	if (abs(c)>abs(d)) {
		max = abs(c);
	}
	else {
		max = abs(d);
	}

	if (max > min) {
		max = max;
	}
	else {
		max = min;
	}

	cout << max;
	return 0;
}