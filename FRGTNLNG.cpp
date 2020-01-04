#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
		
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int b[k],u=0;
		string a[n],c[1000007],d[1000007];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int y=0;
		for(int i=0;i<k;i++)
		{
			cin>>b[i];
			for(int j=0;j<b[i];j++)
			{
				cin>>c[j];
				d[y]=c[j];
				y++;
			}
		}
		int p=y;
		for(int i=0;i<n;i++)
		{
			u=0;
			for(y=0;y<p;y++)
			{
		
				    u=0;
					if(d[y]==a[i])
					{
						cout<<"YES ";
						u=1;
						break;
					}
				
			}
			
			
		if(u==0)
		{
			cout<<"NO ";
		}
	}


		cout<<endl;
	}
	
	return 0;
}
