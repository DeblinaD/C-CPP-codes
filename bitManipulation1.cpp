//get bit and set bit code
#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int position) 
{
    return((n & (1<<position))!=0);
}

int setbit(int n, int position)
{
    return ((n | (1<<position));
}
int main()
{
    cout<<getbit(9,2)<<endl;
    //if output comes 0 that means the position had 0 other wise 1
    
    cout<<setbit(5,1)<<endl;
    //it gives the output as the number which is finally created. just in this case it gives output 7.
}
