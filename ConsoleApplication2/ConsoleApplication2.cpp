// ConsoleApplication2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

const short ARRAY_X = 9;
const short ARRAY_Y = 9;
//short field[ARRAY_Y][ARRAY_X] = {	{1, 2, 3,/**/ 4, 5, 0,/**/ 7, 8, 9},
//									{0, 3, 4,/**/ 5, 0, 0,/**/ 8, 9, 1},
//									{3, 4, 7,/**/ 6, 7, 8,/**/ 9, 1, 2},
//									/*--------------------------------*/
//									{4, 5, 6,/**/ 7, 8, 9,/**/ 1, 2, 3},
//									{5, 0, 7,/**/ 8, 9, 1,/**/ 2, 3, 4},
//									{0, 7, 8,/**/ 9, 1, 2,/**/ 3, 4, 5},
//									/*--------------------------------*/
//									{0, 8, 9,/**/ 1, 2, 3,/**/ 4, 5, 6},
//									{8, 9, 1,/**/ 2, 3, 4,/**/ 5, 6, 7},
//									{9, 1, 2,/**/ 3, 4, 5,/**/ 6, 7, 8} };

//short field[ARRAY_Y][ARRAY_X] = {	{5, 3, 4,/**/ 6, 7, 8,/**/ 9, 1, 2},
//									{6, 7, 2,/**/ 1, 9, 5,/**/ 3, 4, 8},
//									{1, 9, 8,/**/ 3, 4, 2,/**/ 5, 6, 7},
//									/*--------------------------------*/
//									{8, 5, 9,/**/ 7, 6, 1,/**/ 4, 2, 3},
//									{4, 2, 6,/**/ 8, 5, 3,/**/ 7, 9, 1},
//									{7, 1, 3,/**/ 9, 2, 4,/**/ 8, 5, 6},
//									/*--------------------------------*/
//									{9, 6, 1,/**/ 5, 3, 7,/**/ 2, 8, 4},
//									{2, 8, 7,/**/ 4, 1, 9,/**/ 6, 3, 5},
//									{3, 4, 5,/**/ 2, 8, 6,/**/ 1, 7, 9} };

//short field[ARRAY_Y][ARRAY_X] = {	{0, 3, 4,/**/ 6, 7, 8,/**/ 9, 1, 2},
//									{6, 0, 2,/**/ 1, 0, 5,/**/ 3, 4, 8},
//									{1, 9, 0,/**/ 3, 4, 2,/**/ 5, 6, 7},
//									/*--------------------------------*/
//									{0, 5, 9,/**/ 0, 0, 0,/**/ 4, 0, 3},
//									{0, 2, 6,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 1, 3,/**/ 0, 2, 0,/**/ 8, 5, 0},
//									/*--------------------------------*/
//									{0, 0, 0,/**/ 5, 0, 7,/**/ 0, 0, 0},
//									{0, 8, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 8, 0,/**/ 0, 0, 0} };


//short field[ARRAY_Y][ARRAY_X] = {	{0, 0, 4,/**/ 6, 7, 0,/**/ 9, 1, 2},
//									{6, 0, 2,/**/ 1, 0, 5,/**/ 3, 4, 8},
//									{1, 9, 0,/**/ 3, 0, 2,/**/ 0, 6, 7},
//									/*--------------------------------*/
//									{0, 0, 9,/**/ 0, 0, 0,/**/ 0, 0, 3},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 1, 3,/**/ 0, 0, 0,/**/ 8, 5, 0},
//									/*--------------------------------*/
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 8, 0,/**/ 0, 0, 0} }; // 210868 möglichkeiten

//short field[ARRAY_Y][ARRAY_X] = {	{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									/*--------------------------------*/
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									/*--------------------------------*/
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0},
//									{0, 0, 0,/**/ 0, 0, 0,/**/ 0, 0, 0} }; // 210868 möglichkeiten

short field[ARRAY_Y][ARRAY_X] = {	{0, 3, 6,/**/ 0, 9, 0,/**/ 0, 4, 0},
									{0, 0, 0,/**/ 0, 0, 0,/**/ 3, 8, 0},
									{1, 0, 0,/**/ 8, 3, 0,/**/ 0, 5, 2},
									/*--------------------------------*/
									{3, 4, 0,/**/ 0, 0, 0,/**/ 2, 1, 0},
									{0, 0, 5,/**/ 4, 6, 2,/**/ 7, 0, 0},
									{0, 6, 2,/**/ 0, 0, 0,/**/ 0, 9, 4},
									/*--------------------------------*/
									{6, 8, 0,/**/ 0, 4, 7,/**/ 0, 0, 3},
									{0, 7, 9,/**/ 0, 0, 0,/**/ 0, 0, 0},
									{0, 5, 0,/**/ 0, 2, 0,/**/ 8, 7, 0} }; // 210868 möglichkeiten

unsigned long long int counter = 0;

double time1 = 0.0, tstart;

void solver();
void ausgabe();
bool check(const short& x, const short& y, const short& number);

int main()
{
	// double time1 = 0.0, tstart;      // time measurment variables
	tstart = clock();              // start 
	//cout << check(0, 1, 9) << endl;
	solver();
	time1 = clock() - tstart;
	time1 = time1 / CLOCKS_PER_SEC;
	cout << "  time = " << time1 << " sec." << endl;
	cout << "ENDE der Lösungen. Gefundene Lösungen: " << counter << endl;

	return 0;
}

void solver()
{
	for (int y = 0; y < ARRAY_Y; y++)
	{
		for (int x = 0; x < ARRAY_X; x++)
		{
			if (field[y][x] == 0)
			{
				for (int z = 1; z < 10; z++)
				{
					if (check(x, y, z))
					{
						field[y][x] = z;
						solver();
						field[y][x] = 0;
					}
				}
				/* Versuche Zählen
				//counter++;
				//if (!(counter % 100000000))
				//{
				//	time1 = clock() - tstart;
				//	time1 = time1 / CLOCKS_PER_SEC;
				//	cout << "  time = " << time1 << " sec." << endl;
				//	cout << "ENDE der Lösungen. Gefundene Lösungen: " << counter << endl;

				//	//ausgabe();
				//	//cout << "Gefundene Lösungen: " << counter << endl;
				//	system("PAUSE");
				//}
				*/
				return;
			}
		}
	}

	// Gefundene Lösungen
	counter++;
	ausgabe();
	system("PAUSE");
	//if (!(counter % 100000000))
	//{
	//	time1 = clock() - tstart;
	//	time1 = time1 / CLOCKS_PER_SEC;
	//	cout << "  time = " << time1 << " sec." << endl;
	//	cout << "ENDE der Lösungen. Gefundene Lösungen: " << counter << endl;

	//	//ausgabe();
	//	//cout << "Gefundene Lösungen: " << counter << endl;
	//	system("PAUSE");
	//}
	
}

void ausgabe()
{
	for (int i = 1; i < ARRAY_X+1; i++)
	{
		for (int j = 1; j < ARRAY_Y+1; j++)
		{
			cout << " " << field[i-1][j-1];
			if (!(j % 3))
			{
				cout << " |";
			}
		}
		cout << endl; 
		if (!(i % 3))
		{
			cout << "-----------------------" << endl;
		}
	}
}

bool check(const short& x, const short& y, const short& number)
{
	if (field[y][x] != 0)
	{
		return false;
	}

	for (int i = 0; i < ARRAY_Y; i++)
	{
		if (field[y][i] == number)
		{
			return false;
		}
	}
	for (int i = 0; i < ARRAY_X; i++)
	{
		if (field[i][x] == number)
		{
			return false;
		}
	}

	for (int i = y - (y % 3); i < y - (y % 3) + 3; i++)
	{
		for (int j = x - (x % 3); j < x - (x % 3) + 3; j++)
		{
			if (field[i][j] == number)
			{
				return false;
			}
		}
	}
	return true;
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
