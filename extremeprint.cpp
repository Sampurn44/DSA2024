#include <bits/stdc++.h>
using namespace std;
 void extremeprint(int arr[],int n){
    int start = 0;
    int end =n-1;
    while(start<=end){
        if(start==end){cout<<arr[start]<<" ";}
        else {cout<<arr[start]<<" "<<arr[end]<<" ";}
    start++;
    end--;
    }
    
    

}
int main()
{
int arr[]={1,2,3,4,5,6,7};
extremeprint(arr,7);
}