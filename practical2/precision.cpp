// Regula falsi method using Precision


#include <iostream>
#include <cmath>
using namespace std;

#define f(x) x*x*x-2*(x)-9


int main()
{
    int pl;
    double a,b,c;
    double fa,fb,fc;
    cout<<"enter a,b"<<endl;
    cin>>a>>b;
    //cout<<"enter no iteration"<<endl;
    cout<<"enter precision";
int i =0;
    do{

        fa = f(a);
        fb = f(b);
        c =  ((a*fb - b*fa)/(fb - fa));
        fc = f(c);

        cout<<i<<"\t"<<a<<" "<<fa<<" "<<b<<" "<<fb<<" "<<c<<" "<<fc<<endl;

        i++;
        if( fa*fc < 0)
            b = c;
        else
            a = c;

    }while(fabs(fc) > 10e-6);*/
    cout<<endl;
    cout.precision(8);
    cout<<c;
}
