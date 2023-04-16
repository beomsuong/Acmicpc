#include <string>
#include <vector>
#include<iostream>
using namespace std;
int a[202];
int main() {
	int x, b, c;
	cin >> x;
	for (int i = 0;i < x;i++) {
		cin >> b;
		a[b + 100]++;

	}
	cin >> c;
	cout << a[c + 100];
}
