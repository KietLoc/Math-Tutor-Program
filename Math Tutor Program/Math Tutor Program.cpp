#include <iostream>
using namespace std;

double a, b, c;
char d;

static double calcAdd(double a, double b) //Perform Addition
{
    return a + b;
}

int main()
{
	//Get values for addition
    cout << "Enter the first number of your addition: " << endl;
	cin >> a;
	cout << "Enter the second number of your addition: " << endl;
	cin >> b;

    double c = calcAdd(a, b); 

    cout << "Press 'P' and hit Enter to see the result: " << endl;

    //Ignore any leftover newline from previous input
    cin.ignore();
    
    //Wait until the user enters 'P' or 'p'
    while (true)
    {
        d = cin.get();
        if (d == 'P' || d == 'p')
            break;
    }

    cout << "The answer is: " << a << " + " << b << " = " << c << endl;

    return 0;
}
