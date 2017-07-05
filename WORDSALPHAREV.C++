#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

void wordcharreverse(char str[ ],int length)
{
stack<char> s;
int j=0;
char str1[50];
for(int i=0;i<length;i++)
{
	if(str[i]!=' ')
	{
       s.push(str[i]);
	}
	else
	{
         while(!s.empty())
         {

          str1[j]=s.top();
           s.pop();
           j++;
        }
        str1[j]=' ';
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