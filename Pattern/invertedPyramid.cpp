#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
     int i,j,n;
     cout<<"Enter tha value of n: "<<endl;
     cin>>n;
     for (  i = 0; i < n; i++)
     {
         for (  j = 0; j < i; j++)
       {
        cout<<" ";
       }
       for (  j = 0; j < n-i; j++)
       {
        cout<<"* ";
       }
       cout<<endl;
       
     }
     
    return 0;
}