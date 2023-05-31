#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,num[100],k;
    cin >> n>>k;
    for (int i = 0;i < n;i++)
        cin >> num[i];
    vector<long long> dp(10001, 0);
    
    dp[0] = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = num[i]; j <= k; ++j) {
            dp[j] += dp[j - num[i]];
        }
    }
    cout << dp[k];

    return 0;
}
