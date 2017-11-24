#include<iostream>
using namespace std;
int mulrec(int a,int b)
{
  if(a==1)
  {
    return b;
  }
  if(b==1)
  {
    return a;
  }
  int sum=a+mulrec(a,b-1);
  return sum;
}
int main()
{
  int a;
  int b;
  cin>>a;
  cin>>b;
  int mul=mulrec(a,b);
  cout<<endl<<mul;
  return 0;
}
