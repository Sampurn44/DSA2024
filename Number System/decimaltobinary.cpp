#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
 int binary=0,i=0;
 while(n>0){
    int bit= (n & 1);
    binary=bit*pow(10,i++)+binary;
    n=n>>1;
    //     int bit=n%2;
    
//     binary =  (bit * pow(10,i++))+ binary ;
//     n=n/2;  // Multiplying

 }


cout<<binary<<endl;
}