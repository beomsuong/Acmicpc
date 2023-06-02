#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, c,z;
    cin >> n >> c;
    vector<int> v;
    for (int i = 0; i < n;i++) {
        cin >> z;
        v.push_back(z);
    } 
    sort(v.begin(), v.end());
    int s = 0,e=v.back();
  
    int ans = 0; 
    while (s <=e) {
        int now =(s + e) / 2;
        int cnt = 1;
        int a = v[0];

        for (int i = 1; i < n; i++) {
            if (v[i] -a >= now) { 
                a = v[i];
                cnt++;
            }
           
        }
        if (cnt >= c) {  
            ans = now;
            s = now + 1;
        }
        else
        {
            e = now - 1;
        }
    }
    cout << ans;
    return 0;
}
