#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,sum=0;
		long long int c;
		cin>>n>>c;
		int a[n];
		long long int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			b[i]=a[i]+sum;
			sum=b[i];
		}
		
		if(c>=b[n-1])
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		cout<<endl;
	}
	
	
	return 0;
}
