#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int n){
    int start=0,end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int& a,int& b){
    int c=a;
     a=b;
     b=c;

}
int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
reversearray(arr,12);
}