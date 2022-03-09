#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100], b[100], c[100], d[100] ;
    cout<<"Register an account ";
    cout<<"\nUsername : ";
    gets(a);
    cout<<"Pass word : ";
    gets(b);
    system("cls");
    int temp=1;
    do 
    {
        system("cls");
        int Try=3;
    do 
    {
        system("cls");
        cout<<"Login your account ( "<<Try<<" times left )\n";
        cout<<"Username : ";
        gets(c);
        cout<<"Password : ";
        gets(d);
        if (strcmp(a,c)==0 && strcmp(b,d)==0)
        {
            cout<<"Hello username "<<char(1)<<"\t";
            return 0;
        }
        Try--;
    } while (Try!=0);
    cout<<"Wrong username or password \n";
    cout<<"Re-login ? (Y=1/N=0) ";
    cin>>temp;
    } while(temp);

}