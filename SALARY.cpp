#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		int min=a[0];
		for(int i=0;i<n;i++)
		{
			if(a[i]<=min)
			{
				min=a[i];
			}
			
		}
		sum=sum-n*min;
		cout<<sum<<endl;
	}

	
	return 0;
}
