
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i = 0;i<n;i++)
    {
       int a,b;
       cin>>a;
       cin>>b;
       if((a>2*b)or(b>2*a))
       {
           cout<<"NO"<<endl;
       }
       else if((2*a-b)%3 == 0 or (2*b-a)%3 == 0)
       {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    

    
}