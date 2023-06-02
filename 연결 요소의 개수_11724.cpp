#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
 vector<int> s[1001];
 bool a[1001] = { false, };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    queue<int> q;
   
    int u, v;
    for (int i = 0;i < m;i++) {
        cin >> u >> v;
        s[u].push_back(v);
        s[v].push_back(u);
    }
    for (int i = 1;i <= n;i++) {
        if (a[i] == false) {
            a[i] = true;
            q.push(i);
            cnt++;
            while (!q.empty()) {
                int now = q.front();
                q.pop();
                a[now] = true;
                for (auto z : s[now]) {  
                   if(a[z]== false)
                       {
                       a[z] = true;
                        q.push(z);
                        }
                   }
            }
        }
    }
    cout << cnt;
    return 0;
}
