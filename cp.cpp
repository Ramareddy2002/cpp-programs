#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,k,k1,k2,d=0;
	cin>>n;
	k=log10(n);
	if(k%2==0)
		k2=pow(10,k)+1;
	else
		k2=pow(10,k);
	cout<<"no of digits "<<k<<endl;
	cout<<k2<<endl;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c+=1;
		}
	}
	if(c==2)
	{
		c=0;
		cout<<n<<"is a prime number"<<endl;
		for(int j=1;j<=k;j++)
		{
			int r=n%10;
			int p=n/10;
			int s=(r*k2)+p;
			for(int i=1;i<=s;i++)
			{
				if(s%i==0)
				{
					c+=1;
				}
			}
			if(c==2)
			{
				cout<<s<<" is a prime number"<<endl;
				d++;
				if(d==k)
	{
        cout<<"it is satisifies all conditions of circular prime"<<endl;
	}
			}
			else
			{
				cout<<s<<" is not a prime number"<<endl;
			}
			n=s;
			c=0;
		}
	}
	else
	{
		cout<<n<<"not a prime number"<<endl;
	}
}
