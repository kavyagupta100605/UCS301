// Given an array A, find the nearest smaller element for every element A[i] in the array such that the
// element has an index smaller than i.
// https://www.interviewbit.com/problems/nearest-smaller-element/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nearestelement(int arr[],int n){
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        while(!s.empty() && s.top()>arr[i])
        {
            s.pop();
        }
        if(!s.empty())
        {
            ans.push_back(s.top());
        }
        else{
            ans.push_back(-1);
        }
        s.push(arr[i]);
    }
    return ans;


}
int main(){
    int arr[] = {4,5,2,10,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int> arr1=nearestelement(arr,n);
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i];
    }
    return 0;
}
