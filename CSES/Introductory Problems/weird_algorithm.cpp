
#include <iostream>
#include <vector>
using namespace std;
vector<long long unsigned int> weird(long long unsigned int n)
{
    vector<long long unsigned int> v;
    while(n!=1)
    {
        v.push_back(n);
        if(n%2 == 0)
        {
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
    }
    v.push_back(1);
    return v;
}

int main()
{
    long long unsigned int n;
    cin>>n;
    vector<long long unsigned int> v = weird(n);
    for(auto it = v.begin();it != v.end();it++)
    {
        cout<< *it <<" ";
    }

    return 0;
}