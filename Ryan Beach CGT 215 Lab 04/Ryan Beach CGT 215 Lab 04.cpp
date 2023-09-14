#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial(float& n) {
	// I recommend writing your factorial code here
	int answer = 1;
	int count = 0;
	cout << "Factorial: " << endl;
	cout << "Enter a number: " ;
	cin >> n;
	cout << endl;
	while (n <= 0) {
		cout << "Enter a POSITIVE Number: ";
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		answer *= i;
	}
	cout << n << "! = ";
	for (int x = 1; x <= n-1 ; ++x)
	{
		count = x;
		cout << count << " * ";
	}

	cout << n << " = " << answer << endl;

}
void arithmetic(float& n, float& x, float& z) {
	// I recommend writing your arithmetic series code here
	cout << "Arithmetic Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> n;
	cout << "Enter a number to add each time: ";
	cin >> x;
	cout << "Enter the number of elements in the series: ";
	cin >> z;
	float c = n;

	float answer = 0;
	for (int i = 0; i < z; i++)
	{
		answer = answer + n;
		n = n + x;
	}
	
	float sum = 0;
	cout << c;
	for (int i = 0; i < z-1; i++)
	{
		sum = sum + c;
		c = c + x;
		cout << " + " << c;
	}
	cout << " = " << answer << endl;
}


void geometric(float& n, float& x, float& z) {
	// I recommend writing your geometric series code here
	cout << "Geometric Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> n;
	cout << "Enter a number to multiply each time: ";
	cin >> x;
	cout << "Enter the number of elements in the series: ";
	cin >> z;
	float c = n;

	float answer = 0;
	for (int i = 0; i < z; i++)
	{
		answer = answer + n;
		n = n * x;
	}
	
	float sum = 0;
	cout << c;
	for (int i = 0; i < z - 1; i++)
	{
		sum = sum + c;
		c = c * x;
		cout << " + " << c;
	}
	cout << " = " << answer << endl;


}
int main() {
	int choice;
	char again;
	float n;
	float x;
	float z;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial(n);
		}
		else if (choice == 2) {
			arithmetic(n, x, z);
		}
		else if (choice == 3) {
			geometric(n, x, z);
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}