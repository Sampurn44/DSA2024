#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=8;
for (int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        printf(" ");
    }
    for (int k = 0; k <= i; k++) { 
            printf("*"); 
        }
        cout<<endl; 
}
}