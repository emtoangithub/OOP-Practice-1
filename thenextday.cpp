#include "thenextday.h"
int daypp(int &ngay,int &thang,int &nam)
{
    if (nam%4==0)
    {
        if (thang == 2)
        {
            if (ngay ==29 ) 
            {
                ngay=1;
                ++thang;
            }
            else ++ngay;
        } 
        else if (thang==12)
        {
            if (ngay==31)
            {
                ngay=1;
                thang=1;
                ++nam;
            }
            else ++ngay;
        }
        else if (thang == 4 || thang ==6 || thang==9|| thang==11)
        {
            if (ngay==30)
            {
                ngay=1;
                ++thang;
            }
            else ++ngay;
        }
        else 
        {
            if (ngay==31)
            {
                ngay=1;
                ++thang;
            }
            else ++ngay;
        }
    }
else 
{
        if (thang == 2)
        {
            if (ngay ==28 ) 
            {
                ngay=1;
                ++thang;
            }
            else ++ngay;
        } 
        else if (thang==12)
        {
            if (ngay==31)
            {
                ngay=1;
                thang=1;
                ++nam;
            }
            else ++ngay;
        }
        else if (thang == 4 || thang ==6 || thang==9|| thang==11)
        {
            if (ngay==30)
            {
                ngay=1;
                ++thang;
            }
            else ++ngay;
        }
        else 
        {
            if (ngay==31)
            {
                ngay=1;
                ++thang;
            }
            else ++ngay;
        }
    }
}
void nhap(int a , int b , int c)
{
    cout<<"Hay nhap ngay : ";
    cin>>a;
    cout<<"Hay nhap thang : ";
    cin>>b;
    cout<<"Hay nhap nam : ";
    cin>>c;
}
void nhap(int* a, int* b, int* c)
{
    cout<<"Hay nhap ngay : ";
    cin>>*a;
    cout<<"Hay nhap thang : ";
    cin>>*b;
    cout<<"Hay nhap nam : ";
    cin>>*c;
}
void xuat(const int *a , int *b ,  int *c)
{
    cout<<*a<<"/"<<*b<<"/"<<*c;
}