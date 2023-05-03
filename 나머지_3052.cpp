#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a;
	vector<int>v;
	for (int i =0; i < 10; i++) {
		cin >> a;
		v.push_back(a%42);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size();
	
}
