
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    long long unsigned int n;
    cin>>n;
    long long unsigned int sum = 0;
    for(int i=0;i<n-1;i++)
    {
        long long unsigned int m;
        cin>>m;
        sum = sum + m;
        
    }
    sum = (n*(n+1)/2)-sum;
    cout<<sum;
    
    

    return 0;
}