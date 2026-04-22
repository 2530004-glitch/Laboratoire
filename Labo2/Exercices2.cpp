#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void exercice1(void) {
	string str;
	cout << "Enter a chain: ";
	getline(cin, str);
	
	cout << "\noriginal chain: " << str << endl;
	
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			if (str[i] == 'z') {
				str[i] = 'a';
			} else if (str[i] == 'Z') {
				str[i] = 'A';
			} else {
				str[i] = str[i] + 1;
			}
		}
	}
	
	cout << "res: " << str << endl;
}

void exercice2(void) {
	string str;
	cout << "Enter a chain: ";
	getline(cin, str);
	
	cout << "\noriginal chain: " << str << endl;
	
	bool newWord = true;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			newWord = true;
		} else if (newWord && isalpha(str[i])) {
			str[i] = toupper(str[i]);
			newWord = false;
		}
	}
	
	cout << "res: " << str << endl;
}

void exercice3(void) {
	string str;
	cout << "Enter a chain: ";
	getline(cin, str);
	
	cout << "\noriginal chain: " << str << endl;
	
	string longestWord = "";
	string currentWord = "";
	
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			currentWord += str[i];
		} else {
			if (currentWord.length() > longestWord.length()) {
				longestWord = currentWord;
			}
			currentWord = "";
		}
	}
	
	if (currentWord.length() > longestWord.length()) {
		longestWord = currentWord;
	}
	
	cout << "res: " << longestWord << endl;
}

void exercice4(void) {
	string str;
	cout << "Enter a chain: ";
	getline(cin, str);
	
	cout << "\noriginal chain: " << str << endl;
	
	string clean = "";
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			clean += tolower(str[i]);
		}
	}
	
	bool isPalindrome = true;
	for (int i = 0; i < clean.length() / 2; i++) {
		if (clean[i] != clean[clean.length() - 1 - i]) {
			isPalindrome = false;
			break;
		}
	}
	
	if (isPalindrome) {
		cout << "res: yes" << endl;
	} else {
		cout << "res: nope" << endl;
	}
}

void exercice5(void) {
	string str;
	cout << "Enter a chain: ";
	getline(cin, str);
	
	cout << "\noriginal chain: " << str << endl;
	
	int sum = 0;
	string currentNumber = "";
	
	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i])) {
			currentNumber += str[i];
		} else {
			if (!currentNumber.empty()) {
				sum += stoi(currentNumber);
				currentNumber = "";
			}
		}
	}
	
	if (!currentNumber.empty()) {
		sum += stoi(currentNumber);
	}
	
	cout << "res: " << sum << endl;
}

int main(void) {
	int choice = 0;
	
	while (true) {
		cout << "\n===Labo2 String===" << endl;
		cout << "1. Ecrivez un programme C++ pour changer chaque lettres d'une chaine donnee avec la lettre qui la suit dans l'alphabet." << endl;
		cout << "2. Ecrivez un programme C++ pour mettre en majuscule la premiere lettre de chaque mot d'une chaine donnee. Les mots doivent etre separes par un seul espace." << endl;
		cout << "3. Ecrivez un programme C++ pour trouver le plus grand mot dans une chaine donnee." << endl;
		cout << "4. Ecrivez un programme C++ pour verifier si une chaine donnee est un palindrome ou non." << endl;
		cout << "5. Ecrivez un programme C++ pour trouver les nombres dans une chaine donnee et calculer la somme de tous les nombres." << endl;
		cout << "0. Quitter" << endl;
		cout << "Choisissez un exercice: ";
		cin >> choice;
		cin.ignore();
		
		switch (choice) {
			case 1:
				exercice1();
				break;
			case 2:
				exercice2();
				break;
			case 3:
				exercice3();
				break;
			case 4:
				exercice4();
				break;
			case 5:
				exercice5();
				break;
			case 0:
				return 0;
			default:
				cout << "Invalid" << endl;
		}
	}
	
	return 0;
}
