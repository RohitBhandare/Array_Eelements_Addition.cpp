#include <iostream>
using namespace std;
int main()
{
    int i=0,array[5]={5,5,5,5,5},p=0;
    int n1=0,n2=0;
    cout<<"\nArray Elements: ";
    for(p;p<5;p++)
    {
        cout<<" "<<array[p];
    }
    cout<<"\nArray Elements Addition: ";
    for(i;i<5;i++)
    {
        n1=array[i];
        n2=n1+n2;
    }
    cout<<n2;
}
