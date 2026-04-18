#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number: ";

    cin>> n;
    cout<<"Star Pattern1: \n";
    for(int i=0;i<n;i++){
        //spaces
        for(int j=n-i-1;j>=0;j--){
            cout<<" ";

        }
        //stars
        for(int k=1;k<=2*i+1;k++){
            cout<<"*";
        }
        //spaces
        for(int j=n-i-1;j>=0;j--){
            cout<<" ";

        }
        cout<<endl;
    }
    cout<<"Star Pattern 2:";
    for(int i=n;i>0;i--){
        //spaces
        for(int j=n-i-1;j>=0;j--){
            cout<<" ";
        }
        //stars
        for(int k=2*i-1;k>0;k--){
            cout<<"*";
        }
        //spaces
        for(int j=n-i-1;j>=0;j--){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}