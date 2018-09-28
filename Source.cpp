#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iomanip>
using namespace std;

vector<float> molarMasses() // Nasty HardCode
{
	vector<float> masses;
	masses.push_back(1.008f);
	masses.push_back(4.0026f);
	masses.push_back(6.94f);
	masses.push_back(9.0122f);
	masses.push_back(10.81f);
	masses.push_back(12.01f);
	masses.push_back(14.007f);
	masses.push_back(15.999f);
	masses.push_back(18.998f);
	masses.push_back(20.180f);
	masses.push_back(22.990f);
	masses.push_back(24.305f);
	masses.push_back(26.982f);
	masses.push_back(28.035f);
	masses.push_back(30.974f);
	masses.push_back(32.06f);
	masses.push_back(35.45f);
	masses.push_back(39.948f);
	masses.push_back(39.098f);
	masses.push_back(40.078f);
	masses.push_back(44.956f);
	masses.push_back(47.867f);
	masses.push_back(50.942f);
	masses.push_back(51.996f);
	masses.push_back(54.938f);
	masses.push_back(55.845f);
	masses.push_back(58.933f);
	masses.push_back(58.693f);
	masses.push_back(63.546f);
	masses.push_back(65.38f);
	masses.push_back(69.723f);
	masses.push_back(72.630f);
	masses.push_back(74.922f);
	masses.push_back(78.971f);
	masses.push_back(79.904f);
	masses.push_back(83.798f);
	masses.push_back(85.468f);
	masses.push_back(87.62f);
	masses.push_back(88.906f);
	masses.push_back(91.224f);
	masses.push_back(92.906f);
	masses.push_back(95.95f); // Molybdenum
	masses.push_back(101.07f); //Ruthenium
	masses.push_back(102.91f);
	masses.push_back(106.42f);
	masses.push_back(107.87f);
	masses.push_back(112.41f);
	masses.push_back(114.82f);
	masses.push_back(118.71f);
	masses.push_back(121.76f);
	masses.push_back(127.60f);
	masses.push_back(126.90f);
	masses.push_back(131.29f);
	masses.push_back(132.91f);
	masses.push_back(137.33f); // Barium
	masses.push_back(178.49f); // Hafnium
	masses.push_back(180.95f);
	masses.push_back(183.84f);
	masses.push_back(186.21f);
	masses.push_back(190.23f);
	masses.push_back(192.22f);
	masses.push_back(195.08f);
	masses.push_back(196.97f);
	masses.push_back(200.59f);
	masses.push_back(204.38f);
	masses.push_back(207.2f);
	masses.push_back(208.98f);
	masses.push_back(209);
	masses.push_back(210);
	masses.push_back(222);
	masses.push_back(223);
	masses.push_back(226);

	return masses;
} 
vector<string> elementNames() // Nasty Hardcode
{
	vector<string> names;
	names.push_back("Hydrogen");
	names.push_back("Helium");
	names.push_back("Lithium");
	names.push_back("Beryllium");
	names.push_back("Boron");
	names.push_back("Carbon");
	names.push_back("Nitrogen");
	names.push_back("Oxygen");
	names.push_back("Fluorine");
	names.push_back("Neon"); // 10
	names.push_back("Sodium");
	names.push_back("Magnesium");
	names.push_back("Aluminum");
	names.push_back("Silicon");
	names.push_back("Phosphorus");
	names.push_back("Sulfur");
	names.push_back("Chlorine");
	names.push_back("Argon");
	names.push_back("Potassium");
	names.push_back("Calcium"); // 20
	names.push_back("Scandium");
	names.push_back("Titanium");
	names.push_back("Vanadium");
	names.push_back("Chromium");
	names.push_back("Manganese");
	names.push_back("Iron");
	names.push_back("Cobalt");
	names.push_back("Nickel");
	names.push_back("Copper");
	names.push_back("Zinc"); // 30
	names.push_back("Gallium");
	names.push_back("Germanium");
	names.push_back("Arsenic");
	names.push_back("Selenium");
	names.push_back("Bromine");
	names.push_back("Krypton");
	names.push_back("Rubidium");
	names.push_back("Strontium");
	names.push_back("Yttrium");
	names.push_back("Zirconium"); // 40
	names.push_back("Niobium");
	names.push_back("Molybdenum");
	names.push_back("Ruthenium");
	names.push_back("Rhodium");
	names.push_back("Palladium");
	names.push_back("Silver");
	names.push_back("Cadmium");
	names.push_back("Indium");
	names.push_back("Tin"); // 50
	names.push_back("Antimony");
	names.push_back("Tellurium");
	names.push_back("Iodine");
	names.push_back("Xenon");
	names.push_back("Cesium");
	names.push_back("Barium");
	names.push_back("Hafnium");
	names.push_back("Tantalum");
	names.push_back("Tungsten");
	names.push_back("Rhenium"); // 60
	names.push_back("Osmium");
	names.push_back("Iridium");
	names.push_back("Platinum");
	names.push_back("Gold");
	names.push_back("Mercury");
	names.push_back("Thallium");
	names.push_back("Lead");
	names.push_back("Bismuth");
	names.push_back("Polonium");
	names.push_back("Astatine"); // 70
	names.push_back("Radon");
	names.push_back("Francium");
	names.push_back("Radium");

	return names;
}

vector<float> mass = molarMasses(); // global instantiation of mass vector
vector<string> names = elementNames(); // global instantiation of element vector

int indexOfElementGivenName(string element) // takes name and gives you an index location
{

	for (int i = 0; i < names.size(); i++)
	{
		
		if (element == names[i])
			return i;
	}
	return 0;
}
void molsToGrams() 
{
	string name;
	double mols, grams;
	string question;
	do
	{
		cout << "Enter the name of the element :: ";
		cin >> name;
		while(indexOfElementGivenName(name) == 0)
		{
			cout << "Element not found in system, please check the capitalization and spelling.\nTry again :: ";
			cin >> name;
		}
		cout << "Enter number of mols :: ";
		cin >> mols;
		
		grams = mass[indexOfElementGivenName(name)] * mols;

		cout << "The number of grams is :: " << grams << "g." << endl;
		cout << "Would you like to continue? (Y/N) :: ";
		cin >> question;
	} while (question == ("Y"));
}
void gramsToMols()
{
	string name;
	double mols, grams;
	string question;
	do
	{
		cout << "Enter the name of the element :: ";
		cin >> name;
		while (indexOfElementGivenName(name) == 0)
		{
			cout << "Element not found in system, please check the capitalization and spelling.\nTry again :: ";
			cin >> name;
		}
		cout << "Enter number of grams :: ";
		cin >> grams;

		mols = grams / mass[indexOfElementGivenName(name)];

		cout << "The number of mols is :: " << mols << " mols." << endl;
		cout << "Would you like to continue? (Y/N) :: ";
		cin >> question;
		
	} while (question == ("Y"));
}

void modifyMass()
{
	string name, question;
	float num;
	do
	{
		cout << "Enter the name of the element you wish to modify :: ";
		cin >> name;
		int index = indexOfElementGivenName(name);
		cout << "Enter desired mass for " << name << " :: ";
		cin >> num;
		mass[index] = num;
		cout << "Mass successfuly modified. Would you like to go again? (Y/N) :: ";
		cin >> question;
	} while (question == ("Y"));
}


int main()
{
	
	
	int input = 0;

	while(input != 5)
	{
		system("CLS");
		cout << "Chemistry Application\nDesigned by Matas L.\n\n\n";

		cout << "Conversions\n" << "-----------\n";
		cout << "Mols to Grams" << setw(15) << right << "[1]\n";
		cout << "Grams to Mols" << setw(17) << right << "[2]\n\n\n";
		cout << "Program Information\n" << "-------------------\n";
		cout << "Print out elements" << setw(10) << right << "[3]\n";
		cout << "Modify masses" << setw(17) << right << "[4]\n\n\n";
		cout << "Exit" << setw(24) << right << "[5]\n";
		cout << endl << endl;
		cin >> input;

		if (input == 1)
		{
			system("CLS");
			molsToGrams();
		}
		else if (input == 2) 
		{
			system("CLS");
			gramsToMols();
		}
		else if (input == 3) // Print out the Names and Masses
		{
			system("CLS");
			for (size_t i = 0; i < mass.size(); i++)
			{
				cout << names[i] << " :: " << mass[i] << " g\n";
			}
			system("pause");
		}
		else if (input == 4)
		{
			system("CLS");
			modifyMass();
		}
		else if (input == 5)
		{
			system("CLS");
			cout << "Goodbye for now!\n";
			system("pause");
		}
	}

	return 0;
}




