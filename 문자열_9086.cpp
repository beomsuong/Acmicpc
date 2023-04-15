#include <string>
#include <vector>
#include<iostream>
using namespace std;
int main() {
	string a;
	int b;
	cin >> b;
	for (int i = 0;i < b;i++) {
		cin >> a;
		cout << a[0] << a.back() << endl;
}
	return 0;
}
