#include<iostream>
using namespace std;
int main()
{
int mat[10][10];
int mat1[10][10];

int m,n,temp=0;
cin>>m>>n;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
	cin>>mat[i][j];

} 
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
	mat1[i][j]=1;

} 
}
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{

		if(mat[i][j]==0)
		{ 
			temp=i;
			int temp2=j;
          for(int tempp=0;tempp<m;tempp++)
          {
          	mat1[tempp][temp2]=0;
          }
          for(int tempp1=0;tempp1<n;tempp1++)
          {
          	mat1[temp][tempp1]=0;
          }
        
		}
	}
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
	mat[i][j]=mat1[i][j];
	cout<<mat[i][j]<< "  ";

} 
cout<<"\n";
}



}