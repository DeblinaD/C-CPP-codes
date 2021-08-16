/*code to write all the subsets of a given set*/
#include<bits/stdc++.h>
using namespace std;

void subsets(int array[], int n)
{
    for(int i=0; i<(1<<n); i++) /*this loop runs till 2^n times and (1<<n) means 2^n in bit manipulation*/
    {
        for(int j=0; j<n; j++) /*this for loop is for iteratting over the digits*/
        {
             if( i & (1<<j)) /*this is as same as get bit*/
             {
                 cout<<array[j]<<" ";
             }
        }
        cout<<endl;
    }
}

int main()
{
    int array[4]={1,2,3,4};
    subsets(array, 4);
    return 0;
}