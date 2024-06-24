
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    long long unsigned int n;
    cin>>n;
    long long unsigned int m;
    if(n==1)
    {
        cout << 1;
    }
    else if(n<4)
    {
        cout<<"NO SOLUTION";
    }
    else{
        if(n%2==0)
        {
            m = n/2;
            n = n/2;
            
        }
        else{
            m = (n-1)/2;
            n = (n+1)/2;
            
        }
        for(long long unsigned int j =0;j<m;j++)
        {
            cout<<2*j+2<<" ";
        }
        for(long long unsigned int i =0;i<n;i++)
        {
            cout<<2*i+1<<" ";
        }
        
        
    }
    
    

    return 0;
}