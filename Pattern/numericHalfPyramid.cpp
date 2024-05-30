#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;
    for (  i = 0; i <5 ; i++)
    {
         for (  j = 0; j <= i; j++)
         {
            cout<<j+1;
         }
         cout<<endl;
         
    }
    
    return 0;
}