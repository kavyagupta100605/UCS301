// Implement the Binary search algorithm regarded as a fast search algorithm with
// run-time complexity of Ο(log n) in comparison to the Linear Search.

#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void binarysearch(int arr[],int n,int n1)
{
    int s=0,e=n-1;
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==n1)
        {
            break;
        }
        if(arr[mid]<n1)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<"element found at position="<<mid;

}
int main()
{
    int arr[]={3,6,1,2,9,5,0,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    display(arr,size);
    cout<<endl<<"Enter the number you want to search=";
    int num;
    cin>>num;
    binarysearch(arr,size,num);
}