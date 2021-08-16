/*To check the number of 1s in the binary representation of a number*/
#include<iostream>
using namespace std;

int numberofones(int n) 
{
    int count = 0;
    while(n!=0)
    {
        n= (n & (n-1));
        count++;
    }
    return count;
}

int main()
{
    cout<<"number of ones is"<<" "<<numberofones(19);
    return 0;
}