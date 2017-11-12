// Bisection method  using Precision

#include <iostream>
#include <fstream>
#include <math.h>

#define f(x) x*x*x -5*x*x - 10 *(x) +4


using namespace std;

int main()
{
    ofstream file1;
    file1.open("data.csv",ios::out);
    
    int pl;
    double a,b,c;
    double fa,fb,fc;
    cout<<"enter a,b"<<endl;
    cin>>a>>b;
    int i =0;
    do{
        c = double(a+b)/2.0;
        fa = f(a);
        fb = f(b);
        fc = f(c);

        cout<<i+1<<"\t"<<a<<" "<<fa<<" "<<b<<" "<<fb<<" "<<c<<" "<<fc<<endl;
        file1<<i+1<<','<<a<<','<<fa<<','<<b<<','<<fb<<','<<c<<','<<fc<<'\n';
        if( fa*fc < 0)
            b = c;
        else
            a = c;
        i++;

    }while(fabs(fc) > 10e-6);
    cout<<endl;
    cout.precision(6);
    cout<<c;
    file1.close();
}
