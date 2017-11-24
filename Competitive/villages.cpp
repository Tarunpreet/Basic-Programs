#include<iostream>
using namespace std;
int main()
{
  int test;
  cin>>test;

  while(test--)
  {
    string pattern;
    cin>>pattern;
    long long int start=0;
    long long int no_of_A=0;
    long long int no_of_B=0;
    long long int dots=0;
    char prev;
    long long int length=pattern.length();
    if(pattern[0]=='.')
    {
      for(int j=1;pattern[j]!='.';j++)
      {
        start++;
      }
      start++;
    }
    for(int i=start+0;i<length;i++)
    {
      if(pattern[i]=='A')
      {
        no_of_A++;
        if(prev=='A')
        {

          no_of_A=no_of_A+dots;
        }
        prev='A';
        dots=0;
      }
      else if(pattern[i]=='B')
      {
        no_of_B++;
        if(prev=='B')
        {
          no_of_B=no_of_B+dots;
        }
        prev='B';
        dots=0;
      }
      else if(pattern[i]=='.')
      {
        dots++;
      }
    }
    cout<<no_of_A<<" "<<no_of_B<<endl;
  }
  return 0;
}
