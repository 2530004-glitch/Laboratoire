#include <iostream>
#include "Classes.hpp"
#include <algorithm>

#define PI 3.14159

using namespace std;

myNum var;

void exercice1(void) {

	cout << "Choose your numbers: \n";
	cin >> var.num1 >> var.num2 >> var.num3 >> var.num4;
	cout << "\n" << var.num1 << ", " << var.num2 << ", " << var.num3 << ", " << var.num4 << endl;

	int somme = var.num1 + var.num2 + var.num3 + var.num4;
	float moyenne = (var.num1 + var.num2 + var.num3 + var.num4) / 4.0; 
	int produit = (var.num1 * var.num2 * var.num3 * var.num4);
	int max_value = max({ var.num1, var.num2, var.num3, var.num4 });
	int min_value = min({ var.num1, var.num2, var.num3, var.num4 });

	cout << "Somme: " << somme << " "  << "Moyenne: " << moyenne << " " << "Produit: " << produit << " " << "Max: " << max_value << " " << "Min: " << min_value << endl;
}

void exercice2(void) {
	cout << "Choose your radius: \n";
	cin >> var.radius;

	cout << "Diameter: "  << var.radius * 2 << endl;
	cout << "Circumference: "  << 2 * PI * var.radius<< endl;
	cout << "Area: "  << PI * var.radius * var.radius << endl;
}

void exercice3(string name) {
	cout << "Bonjour, " << name << "!" << endl;

}

void exercice4(void) {
	int number = 43;
	int binNumber = 0;
	int temp = number;
	while (temp) {
		binNumber += temp & 1;
		temp >>= 1;
	}
	std::cout << "The number of 1 in binary of " << number << " is: " << binNumber << std::endl;
}

void exercice5(void) {
	int number = 43;
	int inverted = ~number & 0x1F;
	cout << "Reverse bit of " << number << " = " << inverted << endl;
}

void exercice6(void) {
	int number;
	cout << "Number: ";
	cin >> number;
	if ((number & (number - 1)) == 0 && number > 0) {
		cout << number << " is a power of 2" << endl;
	} else {
		cout << number << " not power of 2" << endl;
	}
}

void exercice7(void) {
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) 
		cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++) 
		cout << "*";

		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++) 
		cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++) 
		cout << "*";

		cout << endl;
	}
}

void exercice8(void) {
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3 - i; j++) std::cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++) std::cout << "*";

		std::cout << std::endl;
	}
	for (int i = 1; i <= 4; i++) {
		std::cout << "  *" << std::endl;
	}
}

void exercice9(void) {
	int number;
	cout << "Enter a num between 0 and 999: ";
	cin >> number;
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	cout << "Sum: " << sum << endl;
}

void exercice10(void) {
	int number = 43;
	string binary = "";
	int temp = number;
	while (temp > 0) {
		binary = char('0' + (temp % 2)) + binary;
		temp /= 2;
	}
	std::cout << number << " = " << binary << std::endl;
}

int main(int argc, char* argv[])
{
	//exercice3(argv[1]);
	exercice1();
	exercice2();
	exercice4();
	exercice5();
	exercice6();
	exercice7();
	exercice8();
	exercice9();
	exercice10();
	
	return 0;
}