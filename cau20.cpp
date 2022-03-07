#include<bits/stdc++.h>
using namespace std;
int checksont(int n)
{
	int sum=0;
	if (n==2 || n==3  )
	{
		sum=0;
		return 0;
	}
    else if (n<0) return 1;
	else 
	{
		for (int i=2;i<=sqrt(n);i++)
		{
			if (n%i==0)
			{
			    sum++;
			}
		}
	}
	return sum;
}
int checksocp(int n)
{
    if (n<0) return 0;
    int temp=sqrt(n);
    if ((temp*temp) == n) return 1;
    else return 0;
}
int main ()
{
	int n;
	cout<<"n : ";
	cin>>n;
    if (checksont(n)==0)
	{
		cout<<n<<" la so nguyen to"<<endl;
	}
	else 
	{
		cout<<n<<" khong la so nguyen to"<<endl;	
	}
    int c=checksocp(n);
    if (c) cout<<n<<" la so chinh phuong ";
    else cout<<n<<" khong la so chinh phuong";
	int temp;
	for (int i=1;i<n;i++) 
	{
		if (n%i==0) temp+=i; //cout<<i<<" "; 
	}
	if (temp==n) cout<<"\n"<<n<<" la so hoan hao"; else cout<<"\n"<<n<<" khong la so hoan hao";
	 int sodaonguoc=0;
	 int x=n;
	while (x!=0)
	{
		int temp=x%10;
		sodaonguoc = sodaonguoc*10+temp;
		x/=10;
	}
	cout<<"\n";
	if (sodaonguoc==n) cout<<n<<" la so hoan thien";
	else cout<<n<<" khong la so hoan thien";
	return 0;
}