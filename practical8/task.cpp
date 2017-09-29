#include <iostream>

double func(double x, double y)
{
    return x*y;
}


int main()
{
    float x0,y0;
    std::cin>>x0>>y0;
    float value_at, increment;
    std::cin>>value_at>>increment;

    do{
            double z = func(x0,y0);
        y0 = y0 + increment*z;
        x0 = x0+increment;
        std::cout<<y0<<"\t"<<x0<<std::endl;
    }while(x0<=value_at);
    std::cout<<y0;

}
