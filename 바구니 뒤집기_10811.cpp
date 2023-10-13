#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    int i,j;
    int arr[101]={false,};
    for(int i=0;i<=100;i++)
    arr[i]=i;
    cin>>n>>m;
    for(int q=0;q<m;q++){
       cin>>i>>j;
       for(int z=i;z<=j;z++){
        int save=arr[z];
            arr[z]=arr[j];
            arr[j]=save;
            j--;
       }
    }
    for(int i=1;i<=n;i++)
    cout<<arr[i]<<" ";
}
