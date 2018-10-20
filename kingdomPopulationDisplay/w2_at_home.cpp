/* W02
 * w2_at_home.cpp
 * Ivy Leano
 */

#include <iostream>
#include "Kingdom.h"
using namespace std;
using namespace sict;

void read(Kingdom&);

int main() 
{
	// The number of kingdoms in the array

	int count = 0; 

	Kingdom* pKingdom = nullptr;

	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Enter the number of Kingdoms: ";
	cin >> count;
	cin.ignore();

	if (count < 1) return 1;

	pKingdom = new Kingdom[count];

	for (int i = 0; i < count; ++i) 
	{
		cout << "Kingdom #" << i + 1 << ": " << endl;
		Kingdom& kingdomInput = pKingdom[i];
		read(kingdomInput);
	}
	cout << "==========" << endl << endl;

	// Testing that "display(...)" works

	cout << "------------------------------" << endl
		<< "The 1st Kingdom entered is" << endl
		<< "------------------------------" << endl;
	display(pKingdom[0]);
	cout << "------------------------------" << endl << endl;

	// Expand the array of Kingdoms by 1 element

	Kingdom* pKingdomTwo = nullptr;
	pKingdomTwo = new Kingdom[count + 1];

	for (int i = 0; i < count; i++) 
	{
		pKingdomTwo[i] = pKingdom[i];
	}

	delete[] pKingdom;
	pKingdom = nullptr;
	pKingdom = pKingdomTwo;

	// Add the new Kingdom

	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Kingdom #" << count + 1 << ": " << endl;
	count++;
	read(pKingdomTwo[count - 1]);
	cout << "==========\n" << endl;

	// Testing that the overload of "display(...)" works

	display(pKingdom, count);
	cout << endl;

	delete[] pKingdom;
	pKingdom = nullptr;

	return 0;
}

// Read accepts data for a Kingdom from standard input

void read(Kingdom& kingdom) 
{
	cout << "Enter the name of the Kingdom: ";
	cin.get(kingdom.m_name, 32, '\n');
	cin.ignore(2000, '\n');
	cout << "Enter the number of people living in " << kingdom.m_name << ": ";
	cin >> kingdom.m_population;
	cin.ignore(2000, '\n');
}
