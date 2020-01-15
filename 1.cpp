#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	cout << "Год:" << endl;
	cin >> n;
	if (n >= 1 || n <= 2200) {
		if (((n % 4) == 0) && ((n % 100) != 0) || ((n % 400) == 0)) {
			cout << "LEAP" << endl;
		}
		else
		{
			cout << "NORMANL" << endl;
		}
	}
	else {
	cout << "ERROR";
	}

	return 0;
}

