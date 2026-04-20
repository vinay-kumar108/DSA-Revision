#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || i==n-1){
                cout<<n;
            }
            if(j==0 || j==n-1){
                cout<<n;
            }
            n--;
        }
        cout<<endl;
    }

    return 0;
}