#include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,4,3,2,1};
int n=9;
int c=0;
for(int i=0; i<n; i++){
    c=c^arr[i];
}
cout<<c<<endl;
}