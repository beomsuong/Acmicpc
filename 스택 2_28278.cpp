#include <string>
#include <vector>
#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,num,order;
	vector<int> v;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> order;
		if (order == 1) {
			cin >> num;
			v.push_back(num);
		}
		else if (order == 2) {
			if (v.empty())
				cout << -1 << "\n";
			else
			{
				cout << v.back() << "\n";
				v.erase(v.begin()+v.size()-1);
			}
		}
		else if (order == 3)
			cout << v.size() << "\n";
		else if (order == 4)
			cout << (v.empty() ? 1 : 0) << "\n";
		else {
			if (v.empty())
				cout << -1 << "\n";
			else
				cout << v.back() << "\n";

		}
		
	}

}
