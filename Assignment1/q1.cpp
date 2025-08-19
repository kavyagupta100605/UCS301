// 1) Developa Menudrivenprogramtodemonstrate the followingoperations of Arrays
// ——MENU——-
// 1.CREATE
// 2.DISPLAY
// 3.INSERT
// 4.DELETE
// 5.LINEAR SEARCH
// 6.EXIT

#include<iostream>
using namespace std;
int* create(int n)
{
    int *arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element=";
        cin>>arr[i];
    }
    return arr;
}
void display(int *arr,int n)
{
    cout<<n;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int insert(int *arr,int pos,int num,int n)
{
    int i;
    for(i=n;i>pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    return n++;
}
int deleteelement(int *arr,int num,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            break;
        }
    }
    while(i<n)
    {
        arr[i]=arr[i+1];
        i++;
    }
    return n--;
}
int main()
{
    int a;
    int *arr = nullptr;
    int n=0;

    int *s=&n;
    do{

   cout<<endl<<"Enter 1 for creating array, 2 for display, 3 for insert, 4 for delete, 5 for linear search, 6 for exit= ";
   cin>>a;
   switch(a)
   {
       case 1:
       cout<<"how many elements you want to enter=";
       cin>>n;
       arr=create(n);
       break;
       case 2:
       display(arr,n);
       break;
       case 3:
       int num;
       cout<<"enter the element you want to insert=";
       cin>>num;
       int pos;
       cout<<"enter the pos at which you want to insert=";
       cin>>pos;
       n=insert(arr,pos,num,n);
       break;
       case 4:
        cout<<"enter the element you want to delete=";
       cin>>num;
       n=deleteelement(arr,num,n);
      

   }
}while(a!=6);
   
    return 0;
}
