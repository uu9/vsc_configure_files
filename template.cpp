#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,n;
    while(cin>>n&&n!=0){
        a = 0;
        for(int i=0;i<n;i++){
            cin>>b;
            a += b;
        }
        cout<<a<<endl;
    }
}