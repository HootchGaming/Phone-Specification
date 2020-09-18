#include <iostream>
using namespace std;

class Phone {

public:
	string productName;
	string RAM;
	string price;
	string battery;
	string cpu;
	Phone(string apn, string aRAM, string aprice, string abattery, string acpu) {
		productName = apn;
		RAM = aRAM;
		price = aprice;
		battery = abattery;
		cpu = acpu;
	}
};

int main(){
	string b;
	Phone samsungA50s("Product Name = Samsung Galaxy A50s", "RAM = 6gb or 4gb", "Price = 20,000 RS", "Battery = 4000 mAh", "CPU = Samsung Exynos 9611");

	Phone samsungS20("Product Name = Samsung Galaxy S20", "RAM = 12gb", "Price = 97,999 RS", "Battery = 4000 mAh", "CPU = Samsung Exynos 990");

	Phone oneplus8pro("Product Name = OnePlus 8 Pro", "RAM = 12gb", "Price = 54,999 RS", "Battery = 4510 mAh", "CPU = Qualcomm Snapdragon 865");


	Phone iphone11pro("Product Name = Apple iPhone 11 Pro", "RAM = 4gb", "Price = 99,599 RS", "Battery = 3046 mAh", "CPU = Apple A13 Bionic");

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
