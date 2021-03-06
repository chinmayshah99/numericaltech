// Bisection method  using iteration

#include <iostream>
#include <math.h>

#define f(x) x*x*x-4*(x)-1


using namespace std;

int main()
{
    int pl;
    double a,b,c;
    double fa,fb,fc;
    cout<<"enter a,b"<<endl;
    cin>>a>>b;

    for (int i=0; i<10; i++)
    {
        c = double(a+b)/2.0;
        fa = f(a);
        fb = f(b);
        fc = f(c);

        cout<<i<<"\t"<<a<<" "<<fa<<" "<<b<<" "<<fb<<" "<<c<<" "<<fc<<endl;
        if( fa*fc < 0)
            b = c;
        else
            a = c;
    }
    cout<<endl;
    cout.precision(6);
    cout<<c;
}


