// Lagranges Interpolation
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n= 4;
    float array[n][2];
    float calc = 1.0;
    double value = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>array[i][0];cin>>array[i][1];
    }
    float x = 3;
    for(int i = 0; i < n ; i++)
    {
        calc = 1;
        for(int j = 0; j < n && i !=j ; j++)
        {
            calc *=((x-array[j][0])/(array[i][0]-array[j][0]));
        }
        calc *=array[i][1];value+=calc;
    }
    cout<<" "<<value;return 0;
}
 