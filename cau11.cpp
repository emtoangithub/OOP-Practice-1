#include<bits/stdc++.h>
using namespace std;

struct diemthi
{
    double diemchuan,mon1,mon2,mon3,mdt;
    string mkv;
};
typedef struct diemthi point;
void nhap(point &a)
{
    cout<<"Hay nhap diem chuan : ";
    cin>>a.diemchuan;
    cout<<"Hay nhap diem mon thu nhat : ";
    cin>>a.mon1;
    cout<<"Hay nhap diem mon thu hai : ";
    cin>>a.mon2;
    cout<<"Hay nhap diem mon thu ba : ";
    cin>>a.mon3;
    cin.ignore();
    cout<<"Hay nhap ma khu vuc (A/B/C) : ";
    getline(cin, a.mkv);
    cout<<"Hay nhap ma doi tuong (1/2/3) : ";
    cin>>a.mdt;
}
void xuat(point a)
{
    float diem=0.0;
    if (a.mon1 ==0 || a.mon2==0 || a.mon3 ==0)
    {
        cout<<"Khong trung tuyen";
    }
    else 
    {
       if (a.mkv == "A" && a.mdt == 1) 
       {
            diem = a.mon1+a.mon2+a.mon3+3;
       }
       else 
       if (a.mkv == "A" && a.mdt == 2) 
       {
            diem = a.mon1+a.mon2+a.mon3+2.5;
       }
       else
       if (a.mkv == "A" && a.mdt == 3) 
       {
            diem = a.mon1+a.mon2+a.mon3+2;
       }
      /**/ else if (a.mkv == "B" && a.mdt == 1) 
       {
            diem = a.mon1+a.mon2+a.mon3+2.5;
       }
       else 
       if (a.mkv == "B" && a.mdt == 2) 
       {
            diem = a.mon1+a.mon2+a.mon3+2;
       }
       else
       if (a.mkv == "B" && a.mdt == 3) 
       {
            diem = a.mon1+a.mon2+a.mon3+1.5;
       }
       else 
       /**/
       if (a.mkv == "C" && a.mdt == 1) 
       {
            diem = a.mon1+a.mon2+a.mon3+2;
       }
       else 
       if (a.mkv == "C" && a.mdt == 2) 
       {
            diem = a.mon1+a.mon2+a.mon3+1.5;
       }
       else
       if (a.mkv == "C" && a.mdt == 3) 
       {
            diem = a.mon1+a.mon2+a.mon3+1;
       }
    }
    cout<<"So diem cua ban la "<<diem<<"\t";
    if (diem >= a.diemchuan) cout<<"Trung tuyen";
    else cout<<"Khong trung tuyen";
}
int main()
{
    point a;
    nhap(a);
    xuat(a);
    return 0;
}