#include <iostream>
using namespace std;
int max (int);
int main()
{
    int num, num1, num2, num3, max;
    cout<< "Please Enter the First Number: ";
    cin >> num1;

    cout << "Please Enter the Second Number: ";
    cin>> num2;

    cout << "Please Enter the Third Number: ";
    cin>> num3;

    if (num1>=num2 && num1>=num3)
    {
        max = num1;
    }
    else if (num2>=num1 && num2>=num3)
    {
        max = num2;
    }
    else 
    {
      max = num3;  
    }
    cout << "The Maximum Number, of the three numbers entered is: " <<max <<endl;
}