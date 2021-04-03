#include <iostream>
using namespace std;

string name;
char firstInitial;
int age, zipcode, daysWorked, grossIncome, netIncome, hoursWorkedPerDay[7], totalHours = 0;
bool isAdult;    
float wage;
const float tax = 0.1;

int main(){
	//name
	cout << "What is your name: ";
	cin >> name;
	firstInitial = name[0];
	cout << endl;

	//age
	cout << "How old are you: ";
	cin >> age;
	if (age >= 18) {
		isAdult = true;
		cout << "You are eligible for the program!" << endl;
		cout << endl;
	}
	else {
		isAdult = false;
		cout << "Why are you here this is an adult rated program..." << endl;
		cout << endl;
	}

	//zipcode
	cout << "Enter your Zipcode: ";
	cin >> zipcode;
	cout << endl;

	//days Worked
	cout << "How many days a week do you work: ";
	cin >> daysWorked;
	cout << endl;

	//hours per day
	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter total daily hours for " << i+1 << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}

	cout << "how much do you get paid hourly: ";
	cin >> wage;
	cout << endl;

	int grossIncome = totalHours * (float)wage;
	int netIncome = grossIncome - tax;

	displayInfo();
}
void displayInfo(){
	cout << "Your income results are in!\n";
	cout << "Name: " << name << endl;
	cout << "Initial: " << firstInitial << endl;
	cout << "Age: " << age << endl;
	cout << "Zipcode: " << zipcode << endl;
	cout << "Wage: " << wage << endl;
	cout << "Days worked: " << daysWorked << endl;
	cout << "Total Hours: " << totalHours << endl;
	cout << "Gross Income: " << grossIncome << endl;
	cout << "Net Income: " << netIncome << endl << endl;
}