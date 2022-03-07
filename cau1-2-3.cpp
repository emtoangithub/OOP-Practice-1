#include "phanso.h"

int main()
{
    ps a,b,c;
    int chon;
    do
    {
        system("cls");
        cout<<"Hay chon yeu cau [0->6]\n";
        cout<<"0. Thoat chuong trinh\n";
        cout<<"1. Nhap va xuat phan so\n";
        cout<<"2. So sanh hai phan so\n";
        cout<<"3. Tong 2 phan so\n";
        cout<<"4. Hieu 2 phan so\n";
        cout<<"5. Tich 2 phan so\n";
        cout<<"6. Thuong 2 phan so\n";
        cout<<"Yeu cau cua ban la : ";
        cin>>chon;
        if (chon==0) 
        break;
    switch (chon)
    {
    case 1 : 
    nhap(a);
    rutgon(a);
    xuat(a);
    system("pause");
    break;
    case 2 : 
    nhap(a);
    nhap(b);
    sosanh(a,b);
    system("pause");
    break;
    case 3 : 
    nhap(a);
    nhap(b);
    c=tong(a,b);
    xuat(c);
    cout<<"\t";
    system("pause");
    break;
    case 4 : 
    nhap(a);
    nhap(b);
    c = hieu(a,b);
    xuat(c);
    cout<<"\t";
    system("pause");
    break;
    case 5 : 
    nhap(a);
    nhap(b);
    c = nhan(a,b);
    xuat(c);
    cout<<"\t";
    system("pause");
    break;
    case 6 : 
    nhap(a);
    nhap(b);
    c = chia(a,b);
    xuat(c);
    cout<<"\t";
    system("pause");
    break;
    default:
    cout<<"Ban chon sai moi ban chon lai !";
    cout<<"\t";
        break;
    }
    }
    while (chon!=0);
    system("pause");
}
