#include <iostream>
using namespace std;

class Phone {

public:
	string productName;
	string RAM;
	string price;
	string battery;
	string cpu;

};

int main(){
	string b;
	Phone samsungA50s;
	samsungA50s.productName = "Product Name = Samsung Galaxy A50s";
	samsungA50s.RAM = "RAM = 6gb or 4gb";
	samsungA50s.price = "Price = 20,000 RS";
	samsungA50s.battery = "Battery = 4000 mAh";
	samsungA50s.cpu = "CPU = Samsung Exynos 9611";

	Phone samsungS20;
	samsungS20.productName = "Product Name = Samsung Galaxy S20";
	samsungS20.RAM = "RAM = 12gb";
	samsungS20.price = "Price = 97,999 RS";
	samsungS20.battery = "Battery = 4000 mAh";
	samsungS20.cpu = "CPU = Samsung Exynos 990";

	Phone oneplus8pro;
	oneplus8pro.productName = "Product Name = OnePlus 8 Pro";
	oneplus8pro.RAM = "RAM = 12gb";
	oneplus8pro.price = "Price = 54,999 RS";
	oneplus8pro.battery = "Battery = 4510 mAh";
	oneplus8pro.cpu = "CPU = Qualcomm Snapdragon 865";

	Phone iphone11pro;
	iphone11pro.productName = "Product Name = Apple iPhone 11 Pro";
	iphone11pro.RAM = "RAM = 4gb";
	iphone11pro.price = "Price = 99,599 RS";
	iphone11pro.battery = "Battery = 3046 mAh";
	iphone11pro.cpu = "CPU = Apple A13 Bionic";

	string a;
	while (1 < 10) {
		cout << "\n Choose your desired phone specifications : \n 1.samsungA50s \n 2.samsungS20 \n 3.oneplus8pro \n 4.iphone11pro \n Enter Your Option(1,2,3,4) : ";
		cin >> a;

		if (a == "1") {
			cout << "\n--The specifications--" << endl;
			cout << samsungA50s.productName << endl;
			cout << samsungA50s.RAM << endl;
			cout << samsungA50s.price << endl;
			cout << samsungA50s.cpu << endl;
			cout << samsungA50s.battery << endl;
			cout << "\n Would you like to see another phone specification? yes/no? : ";
			cin >> b;
			if (b == "yes" or b == "Yes" or b == "YES" or b == "y" or b == "Y") {
				continue;
			}
			else {
				cout << "ok , bye!";
				break;
			}
		}
		else if (a == "2") {
			cout << "\n--The specifications--" << endl;
			cout << samsungS20.productName << endl;
			cout << samsungS20.RAM << endl;
			cout << samsungS20.price << endl;
			cout << samsungS20.cpu << endl;
			cout << samsungS20.battery << endl;
			cout << "\n Would you like to see another phone specification? yes/no? : ";
			cin >> b;
			if (b == "yes" or b == "Yes" or b == "YES" or b == "y" or b == "Y") {
				continue;
			}
			else {
				cout << "ok , bye!";
				break;
			}

		}
		else if (a == "3") {
			cout << "\n--The specifications--" << endl;
			cout << oneplus8pro.productName << endl;
			cout << oneplus8pro.RAM << endl;
			cout << oneplus8pro.price << endl;
			cout << oneplus8pro.cpu << endl;
			cout << oneplus8pro.battery << endl;
			cout << "\n Would you like to see another phone specification? yes/no? : ";
			cin >> b;
			if (b == "yes" or b == "Yes" or b == "YES" or b == "y" or b == "Y") {
				continue;
			}
			else {
				cout << "ok , bye!";
				break;
			}

		}
		else if (a == "4") {
			cout << "\n--The specifications--" << endl;
			cout << iphone11pro.productName << endl;
			cout << iphone11pro.RAM << endl;
			cout << iphone11pro.price << endl;
			cout << iphone11pro.cpu << endl;
			cout << iphone11pro.battery << endl;
			cout << "\n Would you like to see another phone specification? yes/no? : ";
			cin >> b;
			if (b == "yes" or b == "Yes" or b == "YES" or b == "y" or b == "Y") {
				continue;
			}
			else {
				cout << "ok , bye!";
				break;
			}

		}
		else {
			cout << " \n Enter a valid option - Try again \n";
			continue;
		}
	}
	return 0;
}
