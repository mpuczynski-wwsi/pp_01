#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "podaj 2 liczby\n";
	float a, b;
	cin >> a >> b;
	float wynik = a * b;
	cout << fixed << setprecision(2);
	if (b >= 0) {
		cout << a << " * " << b << " = " << wynik << "\n";
	}
	else {
		cout << a << " * (" << b << ") = " << wynik << "\n";
	}

}