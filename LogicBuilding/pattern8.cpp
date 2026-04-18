#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number: ";

    cin>> n;
    
    
    
    for(int i=n;i>0;i--){
        //spaces
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        //stars
        for(int k=2*i-1;k>0;k--){
            cout<<"*";
        }
        //spaces
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}