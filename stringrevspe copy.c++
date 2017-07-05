#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

void reverse(char str[],int len)
{
    //Write your code here
    char str2[50]="";
    stack<char> s;
    for(int i=0;i<len;i++)
    {
     if((str[i] >='A'&& str[i]<='Z')||(str[i] >= 'a' &&  str[i] <= 'z'))
     {
         str2[(len-i-1)]=str[i];
     }
     else
     {
         str2[i]=str[i];
     }
    }   
    cout<<str2;
}
int main()
{
    char str[50];
    int length;
    cin.get(str, 50);
    length=strlen(str);
    reverse(&str[0],length); 
    return 0;
}