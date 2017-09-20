// error in computation of e^x

#include <iostream>
#include <cmath>

using namespace std;

long int fact(int number);
int main()
{
    long double x;
    int term_len;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter no of terms"<<endl;
    cin>>term_len;

    double _exp = exp(x);

    double sum = 0.0;
    for(int i = 0; i <= term_len; i++)
    {
        long double term =(pow(x,i)/fact(i));
        sum+= term;

    }
    long double difference = abs(_exp-sum);
    cout.precision(10);
    cout<<_exp<<"\n"<<sum<<endl;

    cout<<"relative error"<<difference<<endl;
    double relative_err = (difference/abs(_exp))*100.0;
    cout<<"% error"<<relative_err;
}


long int fact(int number)
{
    if (number == 0)
        return 1;
    else
        return number * fact(number - 1);
}
