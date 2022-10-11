#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=6;i++)
	{ 	int k=0;
		for(int j=1;j<=6;j++,k+=2)
		{  
			if(j<=i) 
			{
		
			if(i%2==0) 
			{
		cout<<k+2;
		}
			else
		{
			cout<<k+1;
		
		}
        	}
	
			else
		cout<<" ";
		
		
		}
		cout<<endl;
	}
}