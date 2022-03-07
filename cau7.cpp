#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cout<<"Hay nhap vo so tien ( so tien lon hon 50k va chia het cho 50 ) : ";
    cin>>n;
    int so1=0,so2=0,so3=0,so4=0;
    while (n!=0)
    {
        if (n - 500000 > 0 || n-500000==0) 
        {
            so1++;
            n-=500000;
        }
        else if (n - 200000 > 0 || n-200000==0 )
        {
            so2++;
            n-=200000;
        }
        else if (n - 100000 > 0 || n-100000==0 )
        {
            so3++;
            n-=100000;
        }
        else 
        {
            so4++;
            n-=50000;
        }
    }
        cout<<"500k : "<<so1;
        cout<<"\n200k : "<<so2;
        cout<<"\n100k : "<<so3;
        cout<<"\n50k : "<<so4; 
}