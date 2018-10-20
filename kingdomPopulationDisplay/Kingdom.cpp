/* W02
 * Kingdom.cpp
 * Ivy Leano
 */

#include<iostream>
#include "Kingdom.h"
using namespace std;

namespace sict 
{
	void display(Kingdom& kingdom) 
	{
		cout << kingdom.m_name << ", population " << kingdom.m_population << endl;
	}

	void display(Kingdom kingdoms[], int count) 
	{
		int totalPopulation = 0;

		cout << "------------------------------" << endl;
		cout << "Kingdoms of SICT" << endl;
		cout << "------------------------------" << endl;

		for (int i = 0; i < count; i++) 
		{
			cout << i + 1 << ". " << kingdoms[i].m_name << ", population " << kingdoms[i].m_population << endl;
			totalPopulation += kingdoms[i].m_population;
		}

		cout << "------------------------------" << endl;
		cout << "Total population of SICT: " << totalPopulation << endl;
		cout << "------------------------------" << endl;
	};
}