// Forward interpolation

#include <iostream>

using namespace std;

int main()
{
    int n =4;
    cout<<"no of cases"<<endl;
    //cin>>n;
    int input[n][2] = { {0,1},{1,2},{2,5},{3,10}};
    /*for(int i =0; i < n; i++)
    {
        cin>>input[i][0];
        cin>>input[i][1];
    }*/
    int diff[n-1][n-1];

    for(int i = 0; i < n-1; i++)
        diff[i][0] = input[i+1][1] - input[i][1];

    for(int j = 1; j < n-1;j++)
    {
        for(int i = 0; i < n; i++)
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
    }

    for(int i = 0 ; i < n;i++)
    {
        cout<<input[i][0]<<" ";
        cout<<input[i][1]<<" ";
        for(int j= 0; j < n-1; j++)
            cout<<diff[i][j]<<" ";
        cout<<endl;

    }
    float value_at = 0.5;
    float u =(value_at-0)/(input[1][0] - input[0][0]);
    float y = input[0][1];
    for(int j=1;j <=n; j++)
    {
        float pr = 1.0;
        for(int i = 0; i <=j; i++)
        {
            pr=pr*((u-i)/(i+1));
        }
        y=y+(pr*diff[0][j]);
    }
    cout<<endl<<y;
}


/*

//Forward interpolation
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    double x,u,y,pr;
    int size;
    cout<<"How many values? \n";
    cin>>size;
    cout<<"Find y for what x?\n";
    cin>>x;
    int xarr[size], yarr[size], ydiff[size-1][size-1];
    
    for (int i=0; i<size; i++)
    {
        if(i==0)
        {
        cout<<"Enter x"<<i+1;
        cout<<endl;
        cin>>xarr[i];
        cout<<"Enter y"<<i+1;
        cout<<endl;
        cin>>yarr[i];
        }
        
        else
        {
        cout<<"Enter x"<<i+1;
        cout<<endl;
        cin>>xarr[i];
        cout<<"Enter y"<<i+1;
        cout<<endl;
        cin>>yarr[i];
        ydiff[i][0]=yarr[i]-yarr[i-1];
        }
    }
    
    for (int j=1; j<size-1; j++)
    {
        for(int i=0; i<size; i++)
        {
            ydiff[i][j]=(ydiff[i+1][j-1])-(ydiff[i][j-1]);
        }
    }
    cout<<"x\ty\tdy\td2y\td3y \n";
    for (int i=0; i<size; i++)
    {
        cout<<xarr[i]<<"\t"<<yarr[i]<<"\t"<<ydiff[i+1][0]<<"\t"<<ydiff[i+1][1]<<"\t"<<ydiff[i+1][2]<<"\n";
    }
    u=(x-xarr[0])/(xarr[1]-xarr[0]);
    //y = yarr[0]+(u*ydiff[1][0])+(u*(u-1)/2*ydiff[1][1])+((u*(u-1)*(u-2)/6)*ydiff[1][2]);
    
    y=yarr[0];
    for (int j=0; j<size-1; j++)
    {
        pr=1;
        for (int i=0; i<=j; i++)
        {
            pr=pr*((u-i)/(i+1));
            
        }
        cout<<pr<<endl;
        cout<<y<<endl;
        cout<<ydiff[1][j]<<endl;
        y=y+pr*ydiff[1][j];
    }
    cout<<"y is - "<<y;
}

*/