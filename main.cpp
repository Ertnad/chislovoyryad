#include <iostream>
#include <cmath>

using namespace std;

double ln(double x)
{
    return log(x)/log(M_E);
}

int main()
{

    int n = 1;
    double EPS = pow(10, -6);
    double sum = 0.0;
    double sumElement;
    double absoluteSum;

    do
    {
        sumElement = 1.0/(n*(pow(9,pow(n, 2))-1));
        sum = sum+sumElement;
        n++;
    } while(sumElement > EPS);

    absoluteSum = 3.0/2 * ln(3.0) - 1;

    cout <<"The sum of the series: "<< sum << endl;
    cout <<"Absolute amount: "<< absoluteSum<< endl;
    cout <<"absolute accuracy: "<< abs(absoluteSum - sum) << endl;

    return 0;
}
