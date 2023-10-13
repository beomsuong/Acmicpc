#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    bool arr[31]={false,};
    for(int i=0;i<=30;i++)
    arr[i]=false;
    for(int i=1;i<=28;i++){
        cin>>n;
        arr[n]=true;
    }
  for(int i=1;i<=30;i++){
       if(!arr[i])
        cout<<i<<" ";
    }
}
