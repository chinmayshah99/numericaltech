#include <iostream>

using namespace std;

double f(double x, double y)
{
    return x+y;
}

int main()
{

    double x0 = 0.0,xn =0.2,yn = 1.0,step = 0.02,x,y;
    //cin>>x0>>yn>>step>>xn;
    y = yn;
    x = x0;
    for(double i = x0; i < xn; i+=step)
    {
        double k1 = f(x,y);
        double k2 = f(x + step/2.0, y + (k1*step)/2.0);
        double k3 = f(x + step/2.0, y + (k2*step)/2.0);
        double k4 = f(x + step/2.0, y + (k3*step));
        y += (step/6.0)*(k1+(2*k2)+(2*k3)+k4);
        x+=step;
        cout<<" "<<x<<" "<<y<<endl;
    }
}
