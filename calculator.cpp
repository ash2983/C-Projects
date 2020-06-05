#include <iostream>

using namespace std; 

main()
{
	double var1, var2; 
	char decision; 

	beginning:
	cout << "Enter your first number" << endl; 
	cin >> var1; 
	cout << "Enter your second number" << endl; 
	cin >> var2; 
	cout << "Pick an operation:" << endl;
	cout << "Addition (+)" << endl;
	cout << "Subtraction (-)" << endl;
	cout << "Multiplication (*)" << endl;
	cout << "Division (/)" << endl;
	cin >> decision; 

	switch(decision)
	{
		case '+':
			cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
			break; 

		case '-':
			cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
			break;

		case '*':
			cout << var1 << " x " << var2 << " = " << (var1 * var2) << endl;
			break; 

		case '/':
			if(var2)
				cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
			else
				cout << "You cannot divide by 0."; 
			break; 

		default:
			cout << "You did not pick an existing operation." << endl;
	}

	char decision2; 
	cout << "Do you want to continue the program? (Y/N)";
	cin >> decision2; 

	if((decision2 == 'Y') || (decision2 == 'y'))
		goto beginning; 
	else
		exit;
}