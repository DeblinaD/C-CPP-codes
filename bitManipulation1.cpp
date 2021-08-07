//get bit, set bit, clear bit code
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
int clearBit(int n, int pos)
 {
     int mask= ~(1<<pos); //mask is even a particular terminology since we maskate  the particular position where to make zero or one
     return (n & mask);
 }
int main()
{
    cout<<getbit(9,2)<<endl;
    //if output comes 0 that means the position had 0 other wise 1
    
    cout<<setbit(5,1)<<endl;
    //it gives the output as the number which is finally created. just in this case it gives output 7.
    
    cout<<clearBit(5,2)<<endl;
    //it gives the output as the number which is finally created. just in this case it gives output 1 since the final anwer is 0001.
}
