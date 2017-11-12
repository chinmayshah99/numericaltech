// least square method
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n; // no of training data; to be entered by user
    double x[n],y[n];
    double sum_x=0.0,sum_y=0.0,sum_x2=0.0,sum_xy=0.0;
    //training data input
    cout<<"enter x and y"<<endl;
    for(int i =0; i < n;i++)
    {
        cin>>x[i]>>y[i];
        sum_x += x[i]; // for finding summation(x)
        sum_y += y[i];// for finding summation(y)
        sum_xy += x[i]*y[i]; // for finding summation(xy)
        sum_x2 += x[i]*x[i]; // for finding summation(x*x)
    }
    // the equation should be in form y = a+bx
    double a = (sum_y*sum_x2 - sum_xy*sum_x)/(n*sum_x2 - pow(sum_x,2)); // finding value of a
    double b = (sum_y*sum_x - sum_xy*n)/(pow(sum_x,2) - n*sum_x2); // finding value of b
    cout<<"y="<<a<<"+"<<b<<"x"<<endl;
    cout<<"enter x"<<endl;
    float x_input;
    cin>>x_input;
    cout<<a+b*x_input<<endl;
}
