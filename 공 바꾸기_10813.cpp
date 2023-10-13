#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    int arr[101]={0,};
    int i,j;
    
    cin>>n>>m;
    for(int i =1;i<=n;i++){
        arr[i]=i;
    }
    for(int q =0;q<m;q++){
        cin>>i>>j;
       int save=arr[i];
       arr[i]=arr[j];
       arr[j]=save;
    }
     for(int q =1;q<=n;q++){
      cout<<arr[q]<<" ";
     }
}
