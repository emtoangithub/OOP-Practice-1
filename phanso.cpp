#include "phanso.h"
void nhap(ps &n)
    {
        cout<<"Tu so : ";
        cin>>n.tu;
       do
       {
        cout<<"Mau so : ";
        cin>>n.mau;
       }
       while (n.mau == 0 );
    }
void nhap(ps *n)
{
    cout<<"Tu so : ";
    cin>>n->tu;
    cout<<"Mau so : ";
    cin>>n->mau;  
}
void xuat(ps n)
    {
        if (n.mau<-1) cout<<-n.tu<<"/"<<-n.mau;
        else if (n.mau==-1) cout<<-n.tu;
        else if (n.mau==0) cout<<"Khong chia duoc";
        else if (n.mau==1) cout<<n.tu;
        else cout<<n.tu<<"/"<<n.mau; 
    }
void xuat(ps *n)
{
    if (n->mau<-1) cout<<-n->tu<<"/"<<-n->mau;
    else if (n->mau==-1) cout<<-n->tu;
    else if (n->mau==0) cout<<"Khong chia duoc";
    else if (n->mau==1) cout<<n->tu;
    else cout<<n->tu<<"/"<<n->mau;  
}
int ucln(int a, int b){
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a%b);
}
void rutgon(ps &n)
{
    int temp= ucln( n.tu, n.mau);
    n.tu/=temp;
    n.mau/=temp;
}
void rutgon(ps *n)
{
    int temp= ucln( n->tu, n->mau);
    n->tu/=temp;
    n->mau/=temp;  
}
ps tong(ps m , ps n)
{
    ps a;
    if (m.mau==n.mau)
    {
        a.tu=m.tu+n.tu;
        a.mau=m.mau;
    }
    else if (m.mau<n.mau)
    {
        if (n.mau % m.mau ==0)
        {
            a.tu=m.tu*(n.mau/m.mau)+n.tu;
            a.mau=n.mau;
        }
        else
        {
            int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x+n.tu*y;
            a.mau=temp;
        }
    }
    else
    {
        if (m.mau % n.mau ==0)
        {
            a.tu=n.tu*(m.mau/n.mau)+m.tu;
            a.mau=m.mau;
        }
        else
        {
        int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x+n.tu*y;
            a.mau=temp;
        }
    }
    rutgon(a);
    return a;
}
ps hieu(ps m , ps n)
{
    ps a;
    if (m.mau==n.mau)
    {
        a.tu=m.tu-n.tu;
        a.mau=m.mau;
    }
    else if (m.mau<n.mau)
    {
        if (n.mau % m.mau ==0)
        {
            a.tu=m.tu*(n.mau/m.mau)-n.tu;
            a.mau=n.mau;
        }
        else
        {
            int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x-n.tu*y;
            a.mau=temp;
        }
    }
    else
    {
        if (m.mau % n.mau ==0)
        {
            a.tu=n.tu*(m.mau/n.mau)-m.tu;
            a.mau=m.mau;
        }
        else
        {
        int temp=m.mau*n.mau;
            int x=temp/m.mau;
            int y=temp/n.mau;
            a.tu=m.tu*x-n.tu*y;
            a.mau=temp;
        }
    }
    rutgon(a);
    return a;
}
void sosanh(phanso a, phanso b)
{
    rutgon(a);
    rutgon(b);
    int c=ucln(a.mau,b.mau);
    int d=c/a.mau;
    int e=c/b.mau;
    int f =a.tu*d;
    int g =b.tu*e;
    if (f < g) 
    {
        xuat(a); cout<<" < "; xuat(b);
    }
    else if (f>g)
    {
        xuat(a); cout<<" > "; xuat(b);
   
    }
    else 
    {
        xuat(a); cout<<" = "; xuat(b);
    }
    cout<<"\t";    
}
ps nhan(ps a,ps b)
{
    ps c;
    if (a.tu==0 || b.tu==0) 
    {
        c.tu=0;c.mau=1;
        return c;
    }
    else 
    {
        c.tu=a.tu*b.tu;
        c.mau=a.mau*b.mau;
    }
    rutgon(c);
    return c;
}
ps chia(ps a, ps b)
{
    ps c;
    c.tu=a.tu*b.mau;
    c.mau=a.mau*b.tu;
    rutgon(c);
    return c;
}
