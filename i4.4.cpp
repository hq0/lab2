#include<stdio.h>
#include<Math.h>
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	float x1, y1, x2, y2, x3, y3, s, p, x, y;
	cout << "введите треугоьник x1, y1, x2, y2, x3, y3" << endl;  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << "введите точку x y" << endl;  cin >> x >> y;
	float a, b, c,a1,b1,c1;

	a1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b1 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c1 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

	p = (a1 + b1 + c1) / 2;
	s = sqrt(p * (p - a1) * (p - b1) * (p - c1));

	a = (x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y);
	b = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
	c = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);

	if (s != 0) {

		if ((a <= 0 && b <= 0 && c <= 0) || (a >= 0 && b >= 0 && c >= 0)) {
			cout << "true";
		}
		else {
			cout << "false";
		}
	}
	else {
		cout << "ERROR";
	}
	

	}

