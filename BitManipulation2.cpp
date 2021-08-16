/*wite a program to check whether a number is power of two using bit manipulation*/
#include<bits/stdc++.h>
using namespace std;

bool ispower2(int n)     /*if returns 1 then it is a power, if 0 that means not a power of two*/ 
{
    return (n && !(n & n-1 )); /*we are using ! since if the answer of thr bitwise and operation is 0, ! makes it 1 and returns
                                the answer as 1 which means true*/
                            /*again we are writing n && because of the base case where n=0, therefore the whole thing return 0*/
}

int main()
{
    cout<<ispower2(16);
    return 0;
}