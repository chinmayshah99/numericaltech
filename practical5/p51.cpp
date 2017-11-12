#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // hardcoded the matrice. This can be changed by running the commented part below
    float a[3][4] = {3,1,1,8,1,1,1,6,1,-1,3,8};
/*
    for(int i = 0; i < 3; i++)
    {
        for(int j =0; j< 4; j++)
        {
            cin>>a[i][j];
        }
    }*/
    float x[2], y[2], z[2];
    for(int i =0;i<2;i++)
    {
        x[i] =0;
        y[i] =0;
        z[i] =0;
    }
    cout<<"hmm"<<endl;
    do{
            x[1] = x[0];y[1] = y[0];z[1] = z[0];

            x[0] = (a[0][3] - (a[0][1]*y[0]) - (a[0][2]*z[0])) / a[0][0];
            y[0] = (a[1][3] - a[1][0]*x[0] - a[1][2]*z[0]) / a[1][1];
            z[0] = (a[2][3] - a[2][0]*x[0] - a[2][1]*y[0]) / a[2][2];
            cout<<x[0]<<" "<<y[0]<<" "<<z[0]<<endl;



    }while((fabs(x[0]-x[1]) > 10e-3) && (fabs(y[0]-y[1]) > 10e-3) &&(fabs(z[0]-z[1]) > 10e-3));

    cout<<x[0]<<" "<<y[0]<<" "<<z[0]<<endl;
}
