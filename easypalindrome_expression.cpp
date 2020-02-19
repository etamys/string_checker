#include <iostream>
using namespace std;
int main()
{
	char str[20],word[20];
	int i=0,j=0,c,n,f;
	c=0;
	f=1;
	while((str[i]=getchar())!='\n')
   {
   	   if(str[i]=='{' || str[i]=='}' || str[i]=='(' || str[i]==')' ||
   	   	  str[i]=='<'||str[i]=='>' || str[i]== '[' || str[i]==']')
   	   {
   	   	word[j]=str[i];
   	   	j++;
   	   	c++;
   	   }
	    ++i;
   }
   n=c;
j=0;
cout<<n;
   if(n>2)
{
     for((i=0,j=n-1);i<n/2;++i,--j) 
     {
    	if((word[i]=='{' && word[j]=='{') ||
    	  (word[i]=='(' && word[j]==')') ||
    	  (word[i]=='[' && word[j]==']') ||
    	  (word[i]=='<' && word[j]=='>'))

    	{
    		f=1;
    	}
    	else{f=0;}
    	
    
     }

    //now that's the time to display the message
    if(f==1)
    {
    	cout<<"YES";
    }
    else
    {
    	cout<<"NO";
    }
  
   
}
}
