#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Hay nhap he so a : ";
    cin>>a;
    cout<<"Hay nhap he so b : ";
    cin>>b;
    cout<<"Hay nhap he so c : ";
    cin>>c;
    cout<<"Phuong trinh vua nhap la : "<<a<<"x^2 + "<<b<<"x"<<" + "<<c;
    double delta=1.0*(pow(b,2)-4*a*c);
    if (delta <0  ) cout<<"\nPhuong trinh co nghiem phuc : x = "<<"("<<-b<<"+"<<sqrt(abs(delta))<<"i"<<")"<<"/"<<2*a<<" va x = "<<"("<<-b<<"-"<<sqrt(abs(delta))<<"i"<<")"<<"/"<<2*a;
    else if (delta==0) cout<<"\nPhuong trinh co nghiem duy nhat x = "<<(-b/2*a)*1.0;
    else 
    {
        cout<<"\nPhuong trinh co hai nghiem phan biet x1 = "<<(-b+sqrt(delta))/(2*a)<<" va x2 = "<<(-b-sqrt(delta))/(2*a);
    }
    return 0; 

}