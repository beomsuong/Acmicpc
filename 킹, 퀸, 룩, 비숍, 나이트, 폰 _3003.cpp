#include <string>
#include <vector>
#include <map>
#include<sstream>
#include<iostream>
using namespace std;

int main() {
	int a[6];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
	cout << 1 - a[0] << " " << 1 - a[1] << " " << 2 - a[2] << " " <<
		2 - a[3] << " " << 2 - a[4] << " " << 8 - a[5];
}
