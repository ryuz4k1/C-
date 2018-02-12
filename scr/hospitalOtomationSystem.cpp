#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;
void addPatient();
void dischargePatient();
void displayScreen(short h, char[], char[], short, char[]);
void displayList();
void upgradeList();
void dischargedPatient(short, char[], char[], short, char[]);

int main()
{
	int operation = 0;
	char choice;
	do
	{
		do
		{
			cout << endl;
			cout << "Please select an operation in the list" << endl;
			cout << "1- Add patient" << endl;
			cout << "2- Discharge patient" << endl;
			cout << "3- Display list of patient" << endl;
			cout << "Your choice : ";
			cin >> operation;
		} while (operation != 1 && operation != 2 && operation != 3);
		cout << endl;
		switch (operation) {
		case 1:
			addPatient();
			break;
		case 2:
			dischargePatient();
			break;
		case 3:
			displayList();
			break;
		}
		cin.clear();

		cout << endl;
		cout << "Are you going to do another operation ? (y / n): " << endl;
		cout << "Your choice : ";
		cin >> choice;
		cout << endl;
	} while (choice == 'y' || choice == 'Y');
	return 0;
}

void addPatient()
{
	ofstream patientOut("patientList.txt", ios::app);
	cout << "You selected 'add patient operation'.If you want to quit , press CTRL + Z combination" << endl;
	cout << "Neccesary Information : NameSurname - Blood Type - Age - Tel No" << endl;
	cout << "Example : MuratOzer AB+ 40 00000000000";
	srand(time(0));
	char NameSurname[15], BloodType[5], telNo[12];
	short Age, patientNo = rand() % 1000;
	cout << endl << patientNo << " ";
	cin >> NameSurname >> BloodType >> Age >> telNo;
	patientOut << endl;
	patientOut << patientNo << " " << NameSurname << " " << BloodType << " " << Age << " " << telNo;
	patientOut.close();
}

void dischargePatient()
{
	char NameSurname[15], BloodType[5], telNo[12];
	short Age, patientNo, query;
	bool control = 0;

	displayList();
	ifstream patientIn("patientList.txt", ios::in);
	ofstream discharedOut("temp.txt", ios::trunc);
	cout << "\nEnter patient number for discharge : ";
	cin >> query;
	cout << endl;

	while (patientIn >> patientNo >> NameSurname >> BloodType >> Age >> telNo)
	{
		if (patientNo == query)
		{
			cout << NameSurname << " was found" << endl;
			control = 1;
		}
		else
		{
			dischargedPatient(patientNo, NameSurname, BloodType, Age, telNo);
		}
	}

	if (!control)
	{
		cout << "\a" << "Patient was not found" << endl;
	}
	else
	{
		upgradeList();
	}

	patientIn.close();



}

void displayScreen(short h, char a[], char k[], short y, char t[])
{
	cout << setw(3) << h << setw(15) << a << setw(6) << k << setw(6) << y << setw(15) << t << endl;
}

void displayList()
{
	char NameSurname[15], BloodType[5], telNo[12];
	short Age, patientNo, query;

	ifstream patientIn("patientList.txt", ios::in);
	while (!patientIn.eof())
	{
		patientIn >> patientNo >> NameSurname >> BloodType >> Age >> telNo;
		displayScreen(patientNo, NameSurname, BloodType, Age, telNo);
	}
	patientIn.close();
}

void upgradeList()
{
	char save;
	cout << "Do you want to discharge the patient? (y / Y) , Your choice : ";
	cin >> save;
	if (save == 'y' && save == 'Y')
	{
		ifstream stream1("temp.txt");
		ofstream stream2("patientList.txt");
		stream2 << stream1.rdbuf();
	}
}

void dischargedPatient(short h, char a[], char k[], short y, char t[])
{
	ofstream dischargedOut("temp.txt", ios::app);
	dischargedOut << endl;
	dischargedOut << h << " " << a << " " << k << " " << y << " " << t;
	dischargedOut.close();
}





