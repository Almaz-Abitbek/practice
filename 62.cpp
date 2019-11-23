using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a;
     c=a/10000;
    b=(a-c*10000)/1000;
    d=(a-c*10000-b*1000)/100;
    e=(a-c*10000-b*1000-d*100)/10;
    f=(a-c*10000-b*1000-d*100-e*10);
    if (c%2==0)c=0;
    if (b%2==0)b=0;
    if (d%2==0)d=0;
    if (e%2==0)e=0;
    if (f%2==0)f=0;
    cout<<c<<b<<d<<e<<f;
}