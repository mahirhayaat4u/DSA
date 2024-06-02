#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;
     for ( i = 0; i <5; i++)
     {
        for ( j = 0; j < 5-i-1; j++)
        {
            cout<<" ";
        }
        for ( j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
     }

     for (  i = 0; i < 5; i++)
     {
         for (  j = 0; j < i; j++)
       {
        cout<<" ";
       }
       for (  j = 0; j < 5-i; j++)
       {
        cout<<"* ";
       }
       cout<<endl;
       
     }
     
    return 0;
}