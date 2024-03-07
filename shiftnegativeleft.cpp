#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={23,-7,12,-10,-11,40,60};
    int j=0;
    for(int i=0; i<7;i++){
        if(arr[i]>=0){
            
        }
        else{
            int a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
            j++;
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }



}
//2 Pointer Approach i aange badhta jayega j will point at space jaha negative number aa skta hai