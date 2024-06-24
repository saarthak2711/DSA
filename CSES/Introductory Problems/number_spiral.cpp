
#include <iostream>

using namespace std;


int main()
{
    long long unsigned int t;
    cin>>t;
    for(long long unsigned int i = 0;i<t;i++)
    {
        long long unsigned int y,x;
        cin>>y;
        cin>>x;
        if(y>=x)
        {
            if(y%2==0)
            {
                cout<<y*y -x+ 1;
            }
            else{
                cout<<(y-1)*(y-1)+x;
            }
        }
        else{
            if(x%2==0)
            {
                cout<<(x-1)*(x-1)+y;
            }
            else{
                cout<<x*x - y + 1;
            }
        }
        cout<<endl;
    }
    
    

   
}