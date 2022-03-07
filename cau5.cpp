#include<bits/stdc++.h>
using namespace std;

typedef double db;
typedef string str;
struct mark
{
    str name;
    db diemtoan,diemvan;
};
typedef struct mark mark;
void nhap(mark &a)
{
    cout<<"Ho va ten : ";
    getline(cin,a.name);
    cout<<"Diem toan : ";
    cin>>a.diemtoan;
    cout<<"Diem van : ";
    cin>>a.diemvan;
}
void xuat(mark a)
{
    cout<<fixed<<setprecision(1)<<"Ho va ten : "<<a.name<<" \nDiem trung binh la : "<<(a.diemtoan+a.diemvan)/2;
}
int main()
{
    mark a;
    nhap(a);
    xuat(a);
    cout<<"\t";
    system("pause");
    return 0;
}
