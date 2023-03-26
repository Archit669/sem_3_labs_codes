#include <iostream>
#include <math.h>

/* Define function here */
#define f(x) 1 / (1 + pow(x, 2))

using namespace std;
int main()
{
    cout << "Name : Archit Jain" << endl;
    cout << "Roll No. : 72-CSEB-21" << endl;
    cout << "Exp. Topic : Simpson-three-eight Rule" << endl;
    cout << "Given Ques. : Evaluate the Integral of the Following Function - Integral of (1/1+x^2)dx \n"
         << endl;

    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;

    /* Input */
    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub intervals: ";
    cin >> subInterval;

    /* Calculation */

    /* Finding step size */
    stepSize = (upper - lower) / subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);

    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;

        if (i % 3 == 0)
        {
            integration = integration + 2 * (f(k));
        }
        else
        {
            integration = integration + 3 * (f(k));
        }
    }

    integration = integration * stepSize * 3.0 / 8.0;

    cout << endl
         << "Required value of integration is: " << integration << endl;

    return 0;
}