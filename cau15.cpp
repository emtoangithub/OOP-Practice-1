// Câu 15
#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int a = rand() % 100 + 1 ;
    int b;
    do
    {
        cout<<"Hay doan mot so tu 1 toi 100 : ";
        cin>>b;
        if (a>b) cout<<"Hay thu lai voi 1 so lon hon ";
        else if (a<b) cout<<"Hay thu lai voi 1 so nho hon ";
        cout<<"\n";
    }
    while (a!=b);
    cout<<"Chuc mung ban da doan dung "<<char(1);
    return 0;
}