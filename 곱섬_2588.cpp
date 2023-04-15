#include <string>
#include <vector>
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << (b % 10) * a << endl;
	cout << ((b / 10) % 10) * a << endl;
	cout << (((b / 10)/10) % 10) * a << endl;
	cout << a * b;
	return 0;
}
