#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
           int top=i;
           int bottom=2*n-1-i-1;
           int left=j;
           int right=2*n-j-2;
           int x=min(top,bottom);
           int y=min(left,right);
           cout<<abs(min(x,y)-n);
        }
        cout<<endl;
    }

    return 0;
}