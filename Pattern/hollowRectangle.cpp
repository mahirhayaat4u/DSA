#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;
     for (  i = 0; i <=3; i++)
     {
        for (  j = 0; j <=4; j++)
        {
             if (i==0 || i==3)
             {
                cout<<"* ";
             }else
             {
                if (j==0 || j==4)
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
