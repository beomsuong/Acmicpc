#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int  n, input, m2;
    vector<int> v;
    int m1 = 0, n1 ;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> input;
        m1 = max(m1, input);
      
        v.push_back(input);
    }
    cin >> m2;  n1 = 0;
    int now = 0;
    int money = 0;
    int answer = 0;
    while (n1 <= m1) {
        now = (n1 + m1) / 2;

        money = 0;
        for (int i = 0;i < n;i++) {
            if (v[i] < now) {
                money += v[i];
            }
            else {
                money += now;
            }
        }
        if (money > m2) {
            m1 = now - 1;

        }
        else {
            answer = now;
            n1 = now + 1;
        }
    }
    cout << answer;
    return 0;
}
