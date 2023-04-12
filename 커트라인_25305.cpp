#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	vector<int> a;
	int b = 0, c = 0;
	cin >> b >> c;
	int q;
	for(int i =0;i<b;i++)
	{
		cin >> q;
		a.push_back(q);
	}
	sort(a.begin(), a.end());
	cout << a[a.size() - c];
	return 0;
}
