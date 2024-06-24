/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int divisors(int a);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j = 0;j<n;j++)
    {
        int k = divisors(arr[j]);
        std::cout << k << std::endl;
    }
    
    

    return 0;
}
int divisors(int a)
{
    int flag = 0;
    int b = pow(a,0.5);
    for (int j =1;j<=b;j++)
    {
       if (a%j == 0)
       {
           flag++;
       }
    }
    int k;
    if(b*b == a)
    {
       k = 2 *flag - 1;
        return k;
    }
    k = 2*flag;
    return k;
    
}
