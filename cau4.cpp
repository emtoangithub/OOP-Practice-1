#include "thenextday.h"

int main()
{
    int ngay, thang, nam;
    nhap(&ngay, &thang , &nam);
    cout<<"Ngay vua nhap la : "; 
    xuat(&ngay, &thang, &nam);
    daypp(ngay, thang, nam);
    cout<<"\nNgay ke tiep la : ";
    xuat(&ngay, &thang, &nam);
    return 0;
}