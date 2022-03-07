#pragma once
#include<bits/stdc++.h>
using namespace std;
struct phanso
{
    int tu,mau;
};
typedef struct phanso ps;
void nhap(ps &n);
void nhap(ps *n);
void xuat(ps n);
void xuat(ps *n);
int ucln(int a, int b);
void rutgon(ps &n);
void rutgon(ps *n);
ps tong(ps m , ps n);
ps hieu(ps m , ps n);
void sosanh(phanso a, phanso b);
ps nhan(ps a,ps b);
ps chia(ps a, ps b);