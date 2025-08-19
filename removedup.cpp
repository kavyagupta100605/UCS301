// Design the logic to remove the duplicate elements from an Array and after the
// deletion the array should containtheunique elements.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int removedup(int arr[])
{
    int j,i;
    for( i=0,j=0;i<7;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}
void display(int arr[],int j){
    for(int i=0;i<j;i++)
    {
        cout<<arr[i];
    }
}

int main()

{
    int i,j;
    int arr[]={1,2,1,2,4,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    j=removedup(arr);
    display(arr,j);
    return 0;
}