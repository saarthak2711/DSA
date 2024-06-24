
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    long long unsigned int n;
    cin>>n;
    long long unsigned int sum = 0;
    long long unsigned int x[n] ;
    for(long long unsigned int i=0;i<n;i++)
    {
      cin>>x[i];
      if(i==0)
      {
        continue;  
      }
      else if(x[i-1]>x[i]){
        sum = sum + x[i-1] - x[i];
        x[i] = x[i-1];
      }
    }
    cout <<sum;
    
    

    return 0;
}