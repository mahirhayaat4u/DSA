#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;
     for ( i = 0; i <5; i++)
     {
        //printing space
        for (  j = 0; j < 5-1-i; j++)
        {
           cout<<" ";
        }
        //printing star
        for ( j = 0; j <=i; j++)
        {
             if (i==0 || i==4 || j==0 || j==i   )
             {
                    cout<<"* ";
             }else
             {
                cout<<"  ";
             }

             

            
             
        }
        
        cout<<endl;
     }
     
    return 0;
}