#include <iostream>
using namespace std;
int main()
{
int a;
int b = 0;
char c = 0;
int d = 0;
restart:
cout<<"输入需要的相位"<<endl;
cin>>a;
cout<<b<<(a+30+0)*(0.01)/180<<endl;
cout<<c<<(a+30+120)*(0.01)/180<<endl;
cout<<d<<(a+30+180)*(0.01)/180<<endl;
goto restart;
return 0;
}

