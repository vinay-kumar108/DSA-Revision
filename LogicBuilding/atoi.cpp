 #include <bits/stdc++.h>
 using namespace std;
 
 int myAtoi(string &s) {
        
        int n=s.size();
        bool neg=false;
        long long ans=0;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && s[i]=='-'){
            neg=true;i++;
        }
        else if(i<n && s[i]=='+'){
            i++;
        }
        while(i<n && s[i]=='0'){
            i++;
        }
        while(i<n && (s[i]>='0' && s[i]<='9')){
            ans=(ans*10 + s[i]-'0');
            if(neg && -ans<INT_MIN){
                return INT_MIN;
            }
            else if(!neg && ans>INT_MAX){
                return INT_MAX;
            }
            i++;
            
        }
        
        return (neg)?-ans:ans;
        
    }

int main(){
    string s;
    cin>>s;
    cout<<myAtoi(s)<<endl;
}