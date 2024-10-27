#include <iostream>
using namespace std;

int main()
{
    int n = 4;
     int k=1;
    for (int i = 0; i < n; i++)
    {
         
        for (int j = 0; j <= i; j++)
        {
            cout <<  k;
            k++;
            if (i != j)
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    // cout<<k;

    
     int start=k-n;
    for (int i = 0; i < n; i++)
    {

        int m=start;
        for (int j = 0; j < n-i; j++)
        {
              cout <<m;
              m++;
             if(i+j !=n-1 )cout<<" * ";
             
        }
        start=start-(n-1-i);
        cout << endl;
        
    }
    

     
 


    return 0;
}