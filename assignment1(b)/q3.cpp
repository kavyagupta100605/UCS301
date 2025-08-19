// 3) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1
// distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array
// (a) Linear time
// (b) U,sing binary search.
#include<iostream>
using namespace std;
int ls(int arr[],int n){
    int flag=0;
    for(int i=0,j=1;i<=n;i++)
    {
        // cout<<arr[i]<<" "<<i<<endl;
        if(arr[i]!=j)
        {
            flag=j;
            break;
        }
        j++;
    }
    return flag;
}
int main()
{
    int arr[]={1,2,3,4,5,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Number missing = "<<ls(arr,size);
}