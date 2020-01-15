#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int x1, x2, x3, y1, y2, y3;
	double a, b, c, s,p,s2;
	cout << "Стороны x1,x2,x3,y1,y2,y3:" << endl;
	cin >> x1; cin >> x2; cin >> x3; cin >> y1; cin >> y2; cin >> y3;

	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

	if (a == b || b == c || a == c) {
		if (a < b || b < c || c < a) {

			p = (a + b + c) / 2;
			s = sqrt(p*(p-a)*(p-b)*(p-c));
			cout << "S=" << s << endl;
		}
		else {
			cout << "-1";
		}
	}
	else {
		cout << "-1";
	}

	return 0;
}

