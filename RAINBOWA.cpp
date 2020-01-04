#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,noe=0,ch=0,h=0;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			noe++;
		}
		int i=0,b[8]={0};
		for(int l=1;l<=6;l++)
		{
			while(a[i]==l)
			{
				b[l]++;
				i++;
				ch++;
			}
		}
		for(int j=1;j<=6;j++)
		{
			if(b[j]==0)
			{
				h=1;
			}
		}
		while(a[i]==7)
		{
		
			i++;
			ch++;
		}
        
		for(int l=6;l>=1;l--)
		{
			while(a[i]==l)
			{
				b[l]--;
				i++;
				ch++;
			}
		}
	
		for(int j=1;j<=6;j++)
		{
			if(b[j]!=0)
			{
				h=1;
			}
		}
		if(b[7]!=1&&b[7]!=0)
		{
			h=1;
		
		}
		if(ch!=noe)
		{
			h=1;
		}
		
		if(h==1)
		{
			cout<<"no";
		}
		else
		{
			cout<<"yes";
		}
		cout<<endl;
	}
	
	return 0;
}
