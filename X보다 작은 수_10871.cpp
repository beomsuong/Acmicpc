#include <string>
#include <vector>
#include<iostream>
using namespace std;
int a[10001];
int main() {
	int b, c,x;
	cin >> b >> c;
	for (int i = 0;i < b;i++) {
		cin >> x;
		a[i] = x;
	}
	for (int i = 0;i < b;i++) {
		if (a[i] < c)
			cout << a[i] << " ";
	}
}
