#include<iostream>
using namespace std;
int main()
{
	int i;
	for (int i = 1; i <= 50; ++i)

		if (i % 3 == 0 && i % 5 == 0) //The modulus of the numbers is o hence it can be divided by them 
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % 7 == 0) 
		{
			cout << "Woof" << endl;
		}
		else 
			cout << i << endl;

}
