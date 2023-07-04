#include <string>
#include <vector>
#include<iostream>
using namespace std;
int main() {
	int a, b;
	vector<int> a1, b1;
	cin >> a;
	cin >> b;
	while (a != 0) {
		a1.push_back(a % 10);
		b1.push_back(b % 10);
		a /= 10;
		b /= 10;
	}
	a = 0;b = 0;
	for (int i = 0;i < 3;i++) {
		a *= 10;
		a += a1[i];
		b *= 10;
		b += b1[i];

	}
	cout << (a < b ? b : a);
	return 0;
}
