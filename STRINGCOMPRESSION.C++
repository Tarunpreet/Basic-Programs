#include<iostream>
#include<cstring>


using namespace std;

// input - given string
void stringCompression(char input[],int length)
{    // Write your code here
     char temp=input[0];
     int count=1;
     for(int i=1;i<length;i++)
     {
        if(temp==input[i])
        {

        	count=count+1;
        	if(temp!=input[i+1])
        	{

              cout<<input[i]<<count;
              count=1;         
        	}
        }
        else
        {

        	temp=input[i];
        	if(temp!=input[i+1])
        	{
        	    cout<<input[i];
        	}
        }


     }


}

int main()
{
  char c[20];
  cin.getline(c,20);
  int length;
  length=strlen(c);
  stringCompression(c,length);
  return 0;


}