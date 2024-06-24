
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    long long unsigned int n;
    cin>>n;
    long long unsigned int cyphers = 0;
    while(n>=5)
    {
      n= n/5;
      cyphers = cyphers + n;
    }
    cout<<cyphers <<endl;
}