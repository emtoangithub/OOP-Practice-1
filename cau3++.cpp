#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter tree integer number\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    int max=a;
    max = (max<b) ? b : max;
    max = (max<c) ? c : max;
    cout<<"The largest number is "<<max;
    return 0;
}