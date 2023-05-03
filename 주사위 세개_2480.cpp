#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int>v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	if (v[0] == v[1] && v[0] == v[2])
		cout << (v[1] * 1000)+10000;
	else if (v[0] == v[1] && v[1] != v[2])
		cout << (v[0] * 100)+1000; 
	else if (v[0] != v[1] && v[1] == v[2])
		cout << (v[1] * 100)+1000;
		else if (v[0] != v[1] && v[0] != v[2] && v[1] != v[2])
		cout << v[2] * 100;

	return 0;
}
