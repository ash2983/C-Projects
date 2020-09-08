#include <iostream>
using namespace std;

double PI = 3.14159265359;
void initMenu();
void menuDecision(int);
double circle_area(double);
double square_area(double);
double rect_area(double, double);
double triangle_area(double, double);

int main(){
	int choice;
	char decision; 

	do{
	initMenu(); 
	cin >> choice; 
	menuDecision(choice);
	cout << "Do you want to restart program (Y/N)?" << endl;
	cin >> decision;
	} while (decision == 'y' || decision == 'Y');
	return 0; 
}

void initMenu(){
	cout << "Enter option" << endl; 
	cout << "1. Circle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Rectangle" << endl;
	cout << "4. Triangle" << endl;
}

void menuDecision(int choice){

	double r;
	double l; 
	double s; 
	double w;

	switch(choice){
		case 1:
			cout << "Enter the radius: " << endl; 
			cin >> r;
			circle_area(r);
			break;
		case 2:
			cout << "Enter the side: " << endl; 
			cin >> s;
			square_area(s);
			break;
		case 3:
			cout << "Enter the length: " << endl; 
			cin >> l;
			cout << "Now enter the width: " << endl;
			cin >> w; 
			rect_area(l, w);
			break;
		case 4:
			cout << "Enter the length: " << endl; 
			cin >> l;
			cout << "Now enter the width: " << endl;
			cin >> w; 
			triangle_area(l, w);
			break;
		default:
			cout << "Please enter a valid option." << endl;
			
	}
}

double circle_area(double r){
	double result = PI*r*r; 
	cout << "The area of a circle with radius " << r << " is: " << result << endl;  
}

double square_area(double s){
	double result = s*s; 
	cout << "The area of a square with side " << s << " is: " << result << endl;  
}

double rect_area(double l, double w){
	double result = l*w; 
	cout << "The area of a rectangle with length " << l << " and width " << " w " << " is: " << result << endl; 
}

double triangle_area(double l, double w){
	double result = 0.5*l*w; 
	cout << "The area of a triangle with length " << l << " and width " << " w " << " is: " << result << endl; 
}