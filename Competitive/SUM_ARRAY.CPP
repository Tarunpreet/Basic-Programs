// input1 - first array
// size1 - size of first array
// input2 - second array
// size2 - size of second array
// output - array in which sum is to be stored
void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]){
	// Write your code here	
	int j=0;
	int p=0;
	int k=0;
	if(size1>=size2)
	{
	   j=size2-1;
	   k=size1;
   for(int i=size1-1;i>=0;i--)
   { 
   if(j>=0)
   {
       output[k]=input1[i]+input2[j]+p;
       p=0;
       if(output[k]>=10)
       {
           int l=output[k];
           output[k]=(output[k]%10);
          p=(l/10);
          if(k==1)
          {
              output[k-1]=p;
          }
          
       }
       k=k-1;
       j=j-1;
   }
   else
   {
       output[k]=input1[i]+p;
       p=0;
       k=k-1;
   }
   
   }
	}

	else
	{
	    j=size1-1;
	   k=size2;
   for(int i=size2-1;i>=0;i--)
   { 
   if(j>=0)
   {
       output[k]=input1[j]+input2[i]+p;
       p=0;
       if(output[k]>=10)
       {
           int l=output[k];
           output[k]=(output[k]%10);
          p=(l/10);
          if(k==1)
          {
              output[k-1]=p;
          }
          
       }
       k=k-1;
       j=j-1;
   }
   else
   {
       output[k]=input2[i]+p;
       p=0;
       k=k-1;
   }
   
   }
	}
	

}
