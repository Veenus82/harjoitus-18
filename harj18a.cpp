/******
*ohjelman nimi: harjoitus 18
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy viiden koiran nimet ja iät.
Tiedot tallennetaan tietuetaulukkoon.
a) järjestä tiedot ikä -kentän mukaan suuruusjärjestykseen
(pienimmästä suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon näytälle.

*versio 1.0
*pvm: 12.11.2014
*/
#include <iostream>
using namespace std;
const int MAX_K = 3;
struct KOIRATIEDOT
{
	char nimi[10];
	int ika;
};

int main()
{
	KOIRATIEDOT koira[MAX_K];
	int ind;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Anna " << ind + 1 << ". koiran nimi ja ika: ";
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	//cout << "Anna 1. koiran nimi ja ika: ";
	//cin >> koira[0].nimi >> koira[0].ika;
	//cout << "Anna 2. koiran nimi ja ika: ";
	//cin >> koira[1].nimi >> koira[1].ika;
	cout << "Tiedot ennen jarjestamista" << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Koiran " << ind + 1 << ". nimi ja ika: ";
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
	for (int i = 0; i < MAX_K - 1; i++)
		for (int j = i + 1; j < MAX_K; j++)
			if (koira[i].ika > koira[j].ika)
			{
		KOIRATIEDOT a = koira[i];
		koira[i] = koira[j];
		koira[j] = a;
			}
	cout << "Taulukko jarjestamisen jalkeen: " << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Koiran " << ind + 1 << ". nimi ja ika: ";
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
}