#include "Pair.h"
#include "Complex_Public.h"
#include "Complex_Private.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Complex_Public l1, l2(1000, 99), l4;
	cin >> l1;
	cin >> l4;
	cout << "f1 :" << l1 << endl;
	cout << "f4 :" << l4 << endl;
	cout << "f2 = " << l2 << endl;
	cout << " ++ of f2 = " << ++l2 << endl;
	cout << " -- of f2 = " << --l2 << endl;
	cout << "Suma =   " << l1 + l4 << endl;
	cout << "Rizn =   " << l1 - l4 << endl;
	cout << "Multyplay =   " << l1 * l4 << endl;

	Complex_Private l5, l6;
	cin >> l5;
	cin >> l6;
	cout << "f5 :" << l5 << endl;
	cout << "f6 :" << l6 << endl;
	cout << "Suma =   " << l5 + l6 << endl;
	cout << "Rizn =   " << l5 - l6 << endl;
	cout << "Multyplay =   " << l5 * l6 << endl;
	return 0;
}
