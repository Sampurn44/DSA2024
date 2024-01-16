#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=10;

for(int i=0;i<n/2;i++){
    for(int j=n/2;j>i;j--){
        cout<<" ";
    }
    for(int k=0;k<i;k++){
        cout<<"* ";
    }
    cout<<endl;
    
}
//for even n
if (n%2==0){
for(int i=(n/2);i<n;i++){
    for(int k=(n/2);k<i;k++){
        cout<<" ";
    }
    for(int j=n;j>i;j--){
        cout<<"* ";
    }
    
    cout<<endl;
    
}}
//for odd n
else{
for(int i=(n/2)+1;i<n;i++){
    for(int k=(n/2)+1;k<i;k++){
        cout<<" ";
    }
    for(int j=n;j>i;j--){
        cout<<"* ";
    }
    
    cout<<endl;
    
}}
}