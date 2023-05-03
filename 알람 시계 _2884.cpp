#include <string>
#include <vector>
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	b -= 45;
	if (b < 0) {
		a--;
		b = 60 + b;
	}
	if (a < 0) {
		a = 23;
	}
	cout << a << " " << b;
	return 0;
}
