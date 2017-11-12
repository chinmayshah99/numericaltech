// newton raphson method

#include<iostream>
#include <fstream>
using namespace std;
 
double func(double x)
{
    return x*x*x -5*x*x - 10 *(x) + 4;
}
 

double derivFunc(double x)
{
    return 3*x*x - 10*x - 10;
}

void newtonRaphson(double x)
{
    ofstream file1;
    file1.open("data1.csv",ios::out);
    double h,zz;
    int i;
    do{
        zz = x;
        h = func(x)/derivFunc(x);
        
        // x(i+1) = x(i) - f(x) / f'(x)  
        x = x - h;

        cout<<i+1<<"\t"<<zz<<" "<<x<<" "<<func(x)<<" "<<endl;
        file1<<i+1<<','<<zz<<','<<x<<','<<func(x)<<','<<'\n';
        i++;
    }while(fabs(h) > 10e-6);
    
    cout << "The value of the root is : ";
    cout.precision(6);
    cout<< x;
    file1.close();
}
 
int main()
{
    double x0 = 10; // Initial values assumed
    newtonRaphson(x0);
    return 0;
}