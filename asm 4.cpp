#include <iostream>
using namespace std;
extern "C" int calc(int);

int main() {
	int x;
	cout << "Enter x: ";
	cin >> x;
	if (x == 0) {
		cout << "Error: didvision by zero";
		return 1;
	}

	cout << "(x^5 + 2 * (x^2 – 4) + x) / x^3=" << endl;
	cout << "C++: " << int((pow(x, 5) + 2 * (x * x - 4) + x) / pow(x, 3)) << "\n";
	cout << "asm: " << calc(x) << endl;
	return 0;
}
