#include<iostream>
using namespace std;

bool triplet(int x, int y, int z)
{
    int a, b, c;
    a=max(x, max(y,z));

    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        y=z;
    }

    if(a*a==b*b+c*c)
    return true;
    else
     return false;
}
int main()
{
    int p,q,r;
    cin>>p>>q>>r;

    if(triplet(p,q,r))
    {
        cout<<"pYthagorean Triplet";
    }
    else
    cout<<"Not a pythagorean triplet";
    return 0;
}