#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n ;i++){
            //star
            for(int j=0;j<n-i-1;j++){
                   cout << "* ";
            }
            //number
            for(int j=0;j<=i;j++){
                    cout << i + 1;
                   if (j != i) cout << " * ";
            }
              //star
            for(int j=0;j<n - i - 1;j++){
                    cout<<" *";
            }

            cout<<endl;
    }
    return 0;
}

 
