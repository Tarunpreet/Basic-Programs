#include <bits/stdc++.h>
#include<string>
#include <vector>

using namespace std;

int main()
{
   char name[40];
   
   int testcases;
   vector <string> hold;

int white=0;
cin>>testcases;
cin.ignore();
int s=0;
int d=0;
string s1;
string s2;
string s3;
int length=0;
while(s<testcases)
{
  cin.getline(name,40);
  length=strlen(name);

for(int k=length-1;k>=0;k--)
{
   if(white==0&&name[k]!=' ')
   {
      name[k]=tolower(name[k]);
      s2=name[k]+s2;
   }
   else if((name[k]==' '&&white==0))
   {
      white++;
      s2[0]=toupper(s2[0]);
   }
   
   else if(name[k]==' '&&white==1)
   {
      white++;
      name[k+1]=toupper(name[k+1]);
      s1+=name[k+1];
  s1+= ". ";
   s1+=s2;
   s2=s1;
   }
   else if(k==0)
   {
      string s3=s2;
      white++;
      name[k]=toupper(name[k]);
      s2=name[k];
  s2+= ". ";
   s2+=s3;
   }
}
if(white==0)
{
   name[0]=toupper(name[0]);
   hold.push_back(name);
}
else
{
   hold.push_back(s2);
}
s2="";
s1="";
s3="";
s++;
white=0;
}
for (int i = 0; i < hold.size(); i++)
{
cout << hold[i] << endl;

}
return 0;
}