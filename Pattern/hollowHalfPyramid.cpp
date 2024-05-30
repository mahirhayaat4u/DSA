#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
     int i,j,n;
     cout<<"Enter tha value of n: "<<endl;
     cin>>n;

        for ( i = 0; i <n; i++)
     {
        for ( j = 0; j < i+1; j++)
        {
            if (i==0 || i==n-1 )
            {
                cout<<"* ";
            }else{
                 if (j==0 || j==i)
                 {
                    cout<<"* ";
                 }else
                 {
                    cout<<"  ";
                 }
                 
                 
            }
            
        }
        cout<<endl;
     }

    return 0;
}