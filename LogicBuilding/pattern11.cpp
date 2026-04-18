#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter A Number:";
    cin>>n;
    for(int i=5;i>0;i--){
        for(int j=n-i+1;j>0;j--){
            cout<<j%2;
        }
        cout<<endl;
    }
    return 0;

}