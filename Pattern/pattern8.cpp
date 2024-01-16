#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=10;
for(int i=0;i<(n/2);i++){
    for(int k=0;k<i;k++){
        cout<<" ";
    }
    for(int j=n/2;j>i;j--){
        cout<<"* ";
    }
cout<<endl;
}
for(int i=(n/2)+1;i<=n;i++){
    for(int j=n;j>i;j--){
        printf(" ");
    }
    for(int k=n/2;k<i;k++){
        printf("* ");
    }
    cout<<endl;
}
}