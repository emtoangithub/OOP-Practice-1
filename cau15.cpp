// Câu 15
#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int max , min;
    cout<<"Hay nhap doan ban muon doan";
    cout<<"Max : ";
    cin>>max;
    cout<<"Min : ";
    cin>>min;
    int a = min + rand() % (max - min + 1) ;
    int b;
    int point=10;
    int Try=0,sel=1;
    int test=0;
    int win=0, lose=0;
    do
    {
        system("cls");
        test++;
        point=10;
        cout<<"Luat choi : Ban co 10 lan doan neu doan sai 1 lan se tru 1 diem ban co toi da 10 diem\n";
    do
    {
        cout<<"Hay doan mot so tu "<<min<<" cho toi : "<<max;
        cin>>b;
        if (point==0)
        {
            break;
        }
        if (a>b)
        { 
            cout<<"Hay thu lai voi 1 so lon hon ";
            Try++;
            point--;
        }
        else if (a<b) 
        {
            cout<<"Hay thu lai voi 1 so nho hon ";
            Try++;
            point--;
        }
        
        cout<<"\n";
    }
    while (a!=b);
    if (point==0)
    {
        cout<<"Game over";
        lose++;
    }
    else
    {
        cout<<"\nChuc mung ban da doan dung voi so lan thu la "<<Try<<" Diem cua ban "<<point<<" "<<char(1);
    win++;
    }
    cout<<"\n Ban co muon choi tiep khong ? (1=Y/0=N) ";
    cin>>sel;
    }
    while (sel);
    cout<<"Ban da choi "<<test<<" thang "<<win<<" lan"<<" va thua "<<lose<<" lan"<<"\t";
    system("pause");
    return 0;
}
