#include <iostream>
using namespace std;
int main()
{
	char str[20];
	int i=0,n;
	while((str[i]=getchar())!='\n')
   {
	    ++i;
   }
   n=i;
   i=0;
   while(i<n) 
   {
   	   if((-str[i]>='a' && str[i]<='z') || (str[i]=='+' || str[i]=='-'))
       {

       	for(int j=i;j<n;j++)
       	{

       	  str[j]=str[j+1];
        }
        --n;
      }
        
       if((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<+'9'))
        {
          for(int j=i;j<n;j++)
       	  {

       	  str[j]=str[j+1];
          }
          --n;
        }
       if(str[i]>='a' && str[i]<='z')
        {
          for(int j=i;j<n;j++)
       	  {

       	  str[j]=str[j+1];
          }
          --n;
        }
       ++i;  
   }
   n=i;

   //now check string
   int k,l,f=0;
   if(n>2)
  {
     for((k=0,l=n-1);k<=n/2;++k,--l) 
     {
    	if((str[k]=='{' && str[l]=='{') ||
    	   (str[k]=='(' && str[l]==')') ||
    	   (str[k]=='[' && str[l]==']') ||
    		(str[k]=='<' && str[l]=='>'))
    	{
    	  f=1;	
    	}
    	
      
     }
  }
  if(f==1)
    {
    	cout<<"YES";
    	
    }
    else
    {
    	cout<<"NO";
    }
   
}