#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
			
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n,m=0;
		cin>>x>>y>>k>>n;
		int p[n],c[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i]>>c[i];
		}
		int l=x-y;
		for(int i=0;i<n;i++)
		{
			if(l<=p[i])
			{
				if(c[i]<=k)
				{
					m=1;
					cout<<"LuckyChef";
					break;
				}
				
			}
		}
		if(m==0)
		{
			cout<<"UnluckyChef";
		}
		cout<<endl;
	}


	
	return 0;
}
