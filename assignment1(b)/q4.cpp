// 4) String Related Programs
// (a) Write a program to concatenate one string to another string.
// (b) Write a program to reverse a string.
// (c) Write a program to delete all the vowels from the string.
// (d) Write a program to sort the strings in alphabetical order.
// (e) Write a program to convert a character from uppercase to lowercase.
#include<iostream>
#include<string>

using namespace std;
void concatenate(string str1,string str2)
{
    string str3(str1.length() + str2.length(),'\0');
    int i=0;
    while(str1[i]!='\0')
    {
        str3[i]=str1[i];
        i++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        str3[i]=str2[j];
        i++;
        j++;
    }
    i=0;
    while(str3[i]!='\0')
    {
        cout<<str3[i];
        i++;
    }
    // cout<<i;
}
void reverse(string str1)
{
    char *ptr1=&str1[0];
    char *ptr2=&str1[str1.length()-1];
    while(ptr1<ptr2)
    {
        char temp;
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
    int i=0;
    while(str1[i]!='\0')
    {
        cout<<str1[i];
        i++;
    }
}
void sortstring(string str1)
{
 
    int i;
    int j;
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=i+1;str1[j]!='\0';j++)
        {
            if(str1[j]<str1[i])
            {
                char temp;
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            // cout<<str1[i];
        }
    }
    // cout<<str1[0];
    i=0;
    while(str1[i]!='\0')
    {
        cout<<str1[i];
        i++;
    }
}
int main()

{
    string str1={"kavya"};
    // string str2;"
    // cout<<"Input String 1 and String 2=";
    // cin>>str1>>str2;
    // concatenate(str1,str2);
    // reverse(str1);
    // sortstring(str1);
    
    return 0;
}