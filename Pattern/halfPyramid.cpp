#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;
     for ( i = 0; i <=4; i++)
     {
        for ( j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
     
    return 0;
}