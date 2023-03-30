#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int> v;
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		int input;
		cin >> input;
		v.push_back(input);
		sum += input;
	}
	sort(v.begin(), v.end());
	cout << sum / 5 << endl << v[2];
}
