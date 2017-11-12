// Backward interpolation

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
            pr=pr*((u-1)/(i+1));
        }
        y=y+(pr*diff[0][j]);
    }
    cout<<endl<<y;
}
