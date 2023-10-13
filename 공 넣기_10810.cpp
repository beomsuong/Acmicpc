#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    int arr[101]={0,};
    int i,j,k;
    cin>>n>>m;
    for(int q =0;q<m;q++){
        cin>>i>>j>>k;
        for(int z=i;z<=j;z++){
            arr[z]=k;
        }
    }
     for(int q =1;q<=n;q++){
        cout<<arr[q]<<" ";
     }
}
