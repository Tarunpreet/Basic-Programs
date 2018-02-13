#include<iostream>
using namespace std;         
int main()
{

         int n=0;
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
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<n;j++)
            {
                 cout<<arr[i][j]<<" ";
                
            }
            cout<<endl;
         }
         return 0;
}