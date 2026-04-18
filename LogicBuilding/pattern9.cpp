#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number: ";

    cin>> n;
    
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
    
    for(int i=n-1;i>0;i--){
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