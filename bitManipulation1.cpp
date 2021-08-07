//get bit code
#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int position) 
{
    return((n & (1<<position))!=0);
}

int main()
{
    cout<<getbit(9,2)<<endl;
    //if output comes 0 that means the position had 0 other wise 1
}
