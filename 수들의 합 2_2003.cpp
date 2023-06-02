#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[10001];
    int n, m, cnt = 0, sum = 0;
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    arr[n + 1] = 0;
    int start = 0, end = 0;
    while (end>=start) {
        if (sum < m) {
            if (end == n ) {
                break;
            }
         
            sum += arr[end];
   end++;
        }
        else if (sum > m) {
          
            sum -= arr[start];
  start++;

        }
        else
        {
              cnt++;
              if (end == n ) {
                break;
            }

            sum += arr[end]; 
                     end++;
        }
    }

    cout << cnt;
    return 0;
}
