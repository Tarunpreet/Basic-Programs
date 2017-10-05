#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

void wordcharreverse(char str[ ],int length)
{
stack<char> s;
int j=0;
char str1[50];
for(int i=0;i<=length;i++)
{
    if(str[i]!=' '&&str[i]!='\0')
    {
       s.push(str[i]);
    }
    else if(str[i]== ' '|| i==(length))
    {
         while(!s.empty())
         {

          str1[j]=s.top();
           s.pop();
           j++;
        }
        str1[j]=' ';
        j++;
        if(i==length)
        {
            str1[j]='\0';
            
        }
    }

}
cout<<str1;

}
int main()
{
int length;
char str[50];
cin.get(str,50);
length=strlen(str);
wordcharreverse(&str[0],length);
return 0;
}
