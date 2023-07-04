#include <string>
#include <vector>
#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999;i <= 999;i++) {
		for (int q = -999;q <= 999;q++) {
			if (((a * q) + (b * i) == c) && ((d * q) + (e * i) == f)) {
				cout << q << " " << i;
				return 0;
			}
		}
	}
	return 0;
}
