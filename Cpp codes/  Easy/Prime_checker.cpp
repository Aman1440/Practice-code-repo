#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	if(n<=1)
	{
		
		cout<<"Not Prime";
	}
	else
	{
	
for(i=2;i<=n/2;i++)
{
	if(n%i==0)
	{
		cout<<"Not Prime";
		break;
	}
	}
	
	if(i>n/2)
	{
		cout<<"Prime";
	}
}
	return 0;
}
