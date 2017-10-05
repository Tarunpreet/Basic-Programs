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
         s.push(str[i]);
     }
     else
     {
         str2[i]=str[i];
     }
    }   
    for(int j=0;j<len;j++)
    {
        if(str2[j]==0)
        {
            str2[j]=s.top();
            s.pop();
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