#include <iostream>
using namespace std;
int main()
{
    int a,b,n;
    int x[n];
    for (int i = 0; i <n; i++)
    {
        cin>>x[i];
    }
    
    cin>>a>>b;
    
    int sum=0;
    for (int j = a; j <= b; j++)
    {
        sum+=x[j];
    }
    cout<<sum<<"\n";
}




