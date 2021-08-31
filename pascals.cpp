#include<iostream>
using namespace std;
factorial(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int ncr;
    int n;
    cout<<"enter the number of rows of pascals triangle "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            ncr=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<ncr<<" ";
        }
        cout<<endl;
    }
    return 0;
}