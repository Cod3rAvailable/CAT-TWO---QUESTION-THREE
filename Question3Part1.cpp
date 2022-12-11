#include <iostream>
using namespace std;

int checkEven (int num)

{
 int even;
  even = num % 2==0; 
  return even;
}

int main()
{
  int num;
 
  cout << "Please input a Number: ";
  cin >> num;

  if (checkEven(num))
  {
    cout << "The Number, " << num << " , that you have inputted, is an Even Number: ";
  }
    
  
  else
  { 
    cout<<"The Number, " << num << " , that you have inputted is an Odd Number:";
  }

    
}