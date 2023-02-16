// ZahlenHoch_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int wahl;
	double i, j;
	cout << "Wehlen Sie ein Arbeit" <<endl;
	cout << "1-ZahlHoch" << endl;
	cout << "3- e Algotrimen" << endl;
	cout << "4-10 Algoritma" << endl;
	cin >> wahl;

	if (wahl == 1) {
		cout << "Geben Sie Zahl: ";
		cin >> i;
		cout << sqrt(i) << endl;

	}
	else if (wahl == 2) {
		cout << "Zahl Geben: ";
		cin >> i;
		cout << "Hochzahl Geben: ";
		cin >> j;
		cout << pow(i, j) << endl;

	}
	else if (wahl == 3) {
		cout << "Zahl Geben: ";
		cin >> i;
		cout << log(i) << endl;

	}
	else if (wahl == 4) {
		cout << "Zahl Geben: ";
		cin >> i;
		cout << log10(i) << endl;

	}
	else cout << "Falsch ausgewahlt.";
	return 0;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
