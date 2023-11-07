#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

void initial_container(string d1, string d2, string d3, string d4, string d5, float p1, float p2, float p3, float p4, float p5);
void list_shop_items();
void another_item();
void buy_item();
void readfunction();


string d1, d2, d3, d4, d5;
int show = 0;
float p1 = 0;
float p2 = 0;
float p3 = 0;
float p4 = 0;
float p5 = 0;

fstream fs;

int main() {

	char input, input2;
	string password;


	cout << "\nWelcome to the Kiosk store." << endl;
	cout << " [1] Enter Shop Items (Admin only)" << endl;
	cout << " [2] List Shop Items" << endl;
	cout << " [3] Buy Items then print receipt" << endl;
	cout << " [4] View Receipt" << endl;
	cout << " [5] Exit Program" << endl;
	cout << "\n Enter your choice: ";
	cin >> input;

	switch (input) {

	case '1':
		cout << "Input password (For this demonstration, the password is: admin) ";
		cin >> password;
		if (password != "admin") {
			cout << "Wrong password!" << endl;
			cout << "Returing to main menu..." << endl;
			main();
		}
		cout << "input item description #1: ";
		cin >> d1;
		initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
		cout << "input item price #1: ";
		cin >> p1;
		initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
		cout << "Would you like to enter another item? [Y/N]";
		cin >> input2;
		switch (input2) {
		case 'y':
		case 'Y':
			another_item();
		case 'n':
		case 'N':
			main();
			break;
		default:
			cout << "\nInvalid input! \nReturning to menu..." << endl;
			main();
		}
		break;
	case '2':
		list_shop_items();
		system("pause");
		break;
	case '3':
		buy_item();
		main();
		break;
	case '4':
		readfunction();
		break;
	case '5':
		exit(0);
		break;
	default:
		cout << "\nInvalid input!" << endl;
		cout << "Returning to menu..." << endl;
		main();
	}

}

void initial_container(string d1, string d2, string d3, string d4, string d5, float p1, float p2, float p3, float p4, float p5) {
	string DescriptionArray[5] = { d1,d2,d3,d4,d5 };
	float PriceArray[5] = { p1,p2,p3,p4,p5 };
	if (d1.empty()) {
		cout << "\nthere are no items to display yet..." << endl;
		show = 0;
		main();
	}
	if (show == 1) {
		cout << "\nItem #/Item Description/Item Price" << endl << "\n";
		// This is item 1
		if (d1.empty()) {
			cout << "1.) No description." << " ";
		}
		if (p1 == 0) {
			cout << "No price set." << endl;
		}
		else {
			cout << "1.) " << DescriptionArray[0] << " " << PriceArray[0] << endl;
			// This is item 2
		}
		if (d2.empty()) {
			cout << "2.) No description." << " ";
		}
		if (p2 == 0) {
			cout << "No price set." << endl;
		}
		else {
			cout << "2.) " << DescriptionArray[1] << " " << PriceArray[1] << endl;
		}
		// This it item 3
		if (d3.empty()) {
			cout << "3.) No description." << " ";
		}
		if (p3 == 0) {
			cout << "No price set." << endl;
		}
		else {
			cout << "3.) " << DescriptionArray[2] << " " << PriceArray[2] << endl;
		}
		// This is item 4
		if (d4.empty()) {
			cout << "4.) No description." << " ";
		}
		if (p4 == 0) {
			cout << "No price set." << endl;
		}
		else {
			cout << "4.) " << DescriptionArray[3] << " " << PriceArray[3] << endl;
		}
		// This is item 5
		if (d5.empty()) {
			cout << "5.) No description." << " ";
		}
		if (p5 == 0) {
			cout << "No price set." << endl;
		}
		else {
			cout << "5.) " << DescriptionArray[4] << " " << PriceArray[4] << endl;
		}

	}
}

void list_shop_items() {
	show = 1;
	initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
	show = 0;
	main();

}

void another_item() {
	char input3, input4, input5;

	cout << "input item description #2: ";
	cin >> d2;
	initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
	cout << "input item price #2: ";
	cin >> p2;
	initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
	cout << "Would you like to enter another item? [Y/N]";
	cin >> input3;
	switch (input3) {
	case'y':
	case'Y':
		cout << "input item description #3: ";
		cin >> d3;
		initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
		cout << "input item price #3: ";
		cin >> p3;
		initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
		cout << "Would you like to enter another item? [Y/N]";
		cin >> input4;
		switch (input4) {
		case'y':
		case'Y':
			cout << "input item description #4: ";
			cin >> d4;
			initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
			cout << "input item price #4: ";
			cin >> p4;
			initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
			cout << "Would you like to enter another item? [Y/N]";
			cin >> input5;
			switch (input5) {
			case'y':
			case'Y':
				cout << "input item description #5: ";
				cin >> d5;
				initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
				cout << "input item price #5: ";
				cin >> p5;
				initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
				cout << "\nFinal item reached. Returning to menu..." << endl;
			case 'n':
			case 'N':
				main();
			default:
				cout << "\nInvalid input! \nReturning to menu..." << endl;
				main();
			}
		case 'n':
		case 'N':
			main();
		default:
			cout << "\nInvalid input! \nReturning to menu..." << endl;
			main();
		}
	case 'n':
	case 'N':
		main();
	default:
		cout << "\nInvalid input! \nReturning to menu..." << endl;
		main();
	}
	main();

}

void buy_item() {

	buyagain:

	char pick, pick2;
	int quantity;
	float cash;
	quantity = 0;


	if (p1 > 0) {
		cout << "\nWhat would you like to buy?" << endl;
	}
	show = 1;
	initial_container(d1, d2, d3, d4, d5, p1, p2, p3, p4, p5);
	show = 0;

	if (p1 > 0) {
		cout << "\nEnter item number: ";
		cin >> pick;
		switch (pick) {
			//This is item 1
		case '1':
		if (d1.empty()) {
			cout << "\nNo item is assigned there..." << endl;
			system("pause");
			buy_item();
		}
		else {
			cout << "You have selected " << d1 << " which costs " << p1 << endl;
			cout << "Enter quantity: ";
			cin >> quantity;
			float total_price1 = quantity * p1;
			cout << "The total price is: " << total_price1 << endl;
			cout << "Enter cash: ";
			cin >> cash;
			float change1 = cash - total_price1;
			cout << "Your change is: " << change1 << endl;
			cout << "\nYour receipt has been updated" << endl;
			if (d1.empty()) {
				cout << "Empty";
			}
			else {
				fs.open("receipt.txt", fstream::in | fstream::out | fstream::app);
				fs << d1 << " " << quantity << endl;
				fs.close();
			}
			cout << "\nwould you like to buy another item? [Y/N]";
			cin >> pick2;
			switch (pick2) {
			case 'y':
			case 'Y':
				goto buyagain;
			case 'n':
			case 'N':
				cout << "returning to main menu..." << endl;
			}
			main();
		}
		// This is item 2
		case '2':
		if (d2.empty()) {
			cout << "\nNo item is assigned there..." << endl;
			system("pause");
			buy_item();
		}
		else {
			cout << "You have selected " << d2 << " which costs " << p2 << endl;
			cout << "Enter quantity: ";
			cin >> quantity;
			float total_price1 = quantity * p2;
			cout << "The total price is: " << total_price1 << endl;
			cout << "Enter cash: ";
			cin >> cash;
			float change1 = cash - total_price1;
			cout << "Your change is: " << change1 << endl;

			cout << "\nYour receipt has been updated" << endl;
			if (d1.empty()) {
				cout << "Empty";
			}
			else {
				fs.open("receipt.txt", fstream::in | fstream::out | fstream::app);
				fs << d2 << " " << quantity << endl;
				fs.close();
			}
			cout << "\nwould you like to buy another item? [Y/N]";
			cin >> pick2;
			switch (pick2) {
			case 'y':
			case 'Y':
				goto buyagain;
			case 'n':
			case 'N':
				cout << "returning to main menu..." << endl;
			}
			main();
		}
		// This is item 3
		case '3':
		if (d3.empty()) {
			cout << "\nNo item is assigned there..." << endl;
			system("pause");
			buy_item();
		}
		else {
			cout << "You have selected " << d3 << " which costs " << p3 << endl;
			cout << "Enter quantity: ";
			cin >> quantity;
			float total_price1 = quantity * p3;
			cout << "The total price is: " << total_price1 << endl;
			cout << "Enter cash: ";
			cin >> cash;
			float change1 = cash - total_price1;
			cout << "Your change is: " << change1 << endl;

			cout << "\nYour receipt has been updated" << endl;
			if (d1.empty()) {
				cout << "Empty";
			}
			else {
				fs.open("receipt.txt", fstream::in | fstream::out | fstream::app);
				fs << d3 << " " << quantity << endl;
				fs.close();
			}
			cout << "\nwould you like to buy another item? [Y/N]";
			cin >> pick2;
			switch (pick2) {
			case 'y':
			case 'Y':
				goto buyagain;
			case 'n':
			case 'N':
				cout << "returning to main menu..." << endl;
			}
			main();
		}
		// This is item 4
		case '4':
		if (d4.empty()) {
			cout << "\nNo item is assigned there..." << endl;
			system("pause");
			buy_item();
		}
		else {
			cout << "You have selected " << d4 << " which costs " << p4 << endl;
			cout << "Enter quantity: ";
			cin >> quantity;
			float total_price1 = quantity * p4;
			cout << "The total price is: " << total_price1 << endl;
			cout << "Enter cash: ";
			cin >> cash;
			float change1 = cash - total_price1;
			cout << "Your change is: " << change1 << endl;

			cout << "\nYour receipt has been updated" << endl;
			if (d1.empty()) {
				cout << "Empty";
			}
			else {
				fs.open("receipt.txt", fstream::in | fstream::out | fstream::app);
				fs << d4 << " " << quantity << endl;
				fs.close();
			}
			cout << "\nwould you like to buy another item? [Y/N]";
			cin >> pick2;
			switch (pick2) {
			case 'y':
			case 'Y':
				goto buyagain;
			case 'n':
			case 'N':
				cout << "returning to main menu..." << endl;
			}
			main();
		}
		// This is item 5
		case '5':
		if (d5.empty()) {
			cout << "\nNo item is assigned there..." << endl;
			system("pause");
			buy_item();
		}
		else {
			cout << "You have selected " << d5 << " which costs " << p5 << endl;
			cout << "Enter quantity: ";
			cin >> quantity;
			float total_price1 = quantity * p5;
			cout << "The total price is: " << total_price1 << endl;
			cout << "Enter cash: ";
			cin >> cash;
			float change1 = cash - total_price1;
			cout << "Your change is: " << change1 << endl;
			cout << "Would you like to buy another item? Y/N";

			cout << "\nYour receipt has been updated" << endl;
			if (d1.empty()) {
				cout << "Empty";
			}
			else {
				fs.open("receipt.txt", fstream::in | fstream::out | fstream::app);
				fs << d5 << " " << quantity << endl;
				fs.close();
			}
			cout << "\nwould you like to buy another item? [Y/N]";
			cin >> pick2;
			switch (pick2) {
			case 'y':
			case 'Y':
				goto buyagain;
			case 'n':
			case 'N':
				cout << "returning to main menu..." << endl;
			}
			main();
		}
		}

	}
	main();
}

void readfunction() {
	ifstream txtread("receipt.txt");
	if (txtread.fail()) {
		cerr << "\nNo receipt has been generated yet! Try buying something to generate one." << endl;
		system("pause");
		main();
	}
	if (txtread.peek() == std::ifstream::traits_type::eof())
	{
		cout << "There are no items in the receipt to display...";
		main();
	}
	else {
		cout << "\n" << txtread.rdbuf();
		main();
	}
}





