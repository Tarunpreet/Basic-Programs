#include<iostream>
using namespace std;
int main()
{
     int test;
     cin>>test;
     int max=0;
     long long int x=0;
     while(test--)
     {   int n=0;
         cin>>n;
         int** arr=new int*[n];
         for(int i=0;i<n;i++) 
         {
          arr[i]=new int[n];
         }
         for(int i=0;i<n;i++)
         {
         	for(int j=0;j<n;j++)
         	{
                 cin>>arr[i][j];
                
         	}
         }
         for(int i=0;i<n;i++)
         {
            sort(&arr[i][0],&arr[i][0]+n);
         }
         int max=arr[0][n-1];
         int max1=-1;
         for(int j=n-1;j>=0;j--)
         {
            
            for(int i=0;i<n;i++)
            {
                max=arr[i][j];
                if(max>max1)
                {
                    total=total+max;
                    max1=max;
                }
            }
         }
     }
	return 0;
}