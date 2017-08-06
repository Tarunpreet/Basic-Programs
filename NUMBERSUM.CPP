#include<iostream>

using namespace std;

int sumdigits(int number)
{
	// Write your code here
   int temp = number;
   int sum1 =0;
   int sum2 =0;
   int n;
   while(temp!=0)
   {
    n=temp%10;
    sum1=sum1+n;
    temp=temp/10; 
   }
  while(sum1!=0)
  {
    n=sum1%10;
    sum2=sum2+n;
    sum1=sum1/10;
  }
  return(sum2);

}

int main()
{

  int number,sum;
  cin>>number;
  sum=sumdigits(number);
  cout<<endl<<sum;
  return 0;
}
