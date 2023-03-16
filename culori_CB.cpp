//prof. Marinel Serban
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

//CULORI TEXT
const int fBLACK = 0;
const int fBLUE = FOREGROUND_BLUE;
const int fGREEN = FOREGROUND_GREEN;
const int fTEAL = FOREGROUND_BLUE | FOREGROUND_GREEN;
const int fRED = FOREGROUND_RED;
const int fPURPLE = FOREGROUND_RED | FOREGROUND_BLUE;
const int fBROWN = FOREGROUND_RED | FOREGROUND_GREEN;
const int fGREY = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN;
const int fBRIGHT_BLUE = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
const int fBRIGHT_GREEN = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
const int fBRIGHT_TEAL = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
const int fBRIGHT_RED = FOREGROUND_RED| FOREGROUND_INTENSITY;
const int fBRIGHT_PURPLE = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
const int fYELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
const int fBRIGHT_WHITE = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY;
//CULORI HARTIE - BACKGROUND
const int bBLUE = BACKGROUND_BLUE;
const int bGREEN = BACKGROUND_GREEN;
const int bTEAL = BACKGROUND_BLUE | BACKGROUND_GREEN;
const int bRED = BACKGROUND_RED;
const int bPURPLE = BACKGROUND_RED | BACKGROUND_BLUE;
const int bBROWN = BACKGROUND_RED | BACKGROUND_GREEN;
const int bGREY = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN;
const int bBRIGHT_BLUE = BACKGROUND_BLUE | BACKGROUND_INTENSITY;
const int bBRIGHT_GREEN = BACKGROUND_GREEN | BACKGROUND_INTENSITY;
const int bBRIGHT_TEAL = BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY;
const int bBRIGHT_RED = BACKGROUND_RED| BACKGROUND_INTENSITY;
const int bBRIGHT_PURPLE = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY;
const int bYELLOW = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY;
const int bBRIGHT_WHITE = BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY;

using namespace std;

HANDLE hConsole;                             //declar variabila de tip HANDLE

int culoare;

void asteapta(int ms)                        //utilizeaza functia standard clock()
{
	int st = clock();
	while (clock() - st < ms);
}

void SetColor(unsigned int culoare)
{
	SetConsoleTextAttribute(hConsole, culoare);
}

int main()
{
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE); //pun in ea informatiile

//pentru a forma culorile folosesc cele 3 culori primare (RGB) - constante predefinite
//pentru culoare mai luminoasa (BRIGHT) voi folosi constantele predefinite FOREGROUND_INTENSITY si BACKGROUND_INTENSITY
//se foloseste operatorul | (sau pe biti) deoarece este mai rapid decat + (adunarea)
//culoarea este formata pe 8 biti
/*
    	  PAPER      INK
    	 _ _ _ _  _ _ _ _
    	| | | | || | | | |
    	 - - - -  - - - -
    	 7 6 5 4  3 2 1 0
    	 ^ ^ ^ ^  ^ ^ ^ ^
     BR__| | | |  | | | |_BLUE
    RED____| | |  | | |___GREEN
  GREEN______| |  | |_____RED
   BLUE________|  |_______BR

   Exemplu:
         0 1 0 1  0 0 1 1 inseamna ALBASTRU+VERDE pe fond ROSU+ALBASTRU


	SetColor(fRED + bYELLOW);
	cout << "UITE MAMA CE CULOARE ROSIE...!!! ***\n";
	asteapta(10000);                 //asteapta 10 secunde

	for (culoare = 0; culoare < 16; culoare++)
	{
//		SetConsoleTextAttribute(hConsole, culoare);
		SetColor(culoare+64);
		cout << "UAU!!! Ce text smecher!!!   INK = " << culoare % 16 << "     PAPER = " << culoare / 16 << '\n';
		asteapta(1000);    //asteapta 0.1 secunde
	}

*/


	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
	cout << "Asteapta 5 secunde...\n";

	asteapta(5000); //5 secunde

	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED);
	cout << "Text exemplu\n";

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
	cout << "Text ROSU STRALUCITOR pe VERDE\n";

	SetConsoleTextAttribute(hConsole, fBRIGHT_BLUE);
	cout << "Text albastru stralucitor\n";

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
	cout << "Text normat ALB pe NEGRU\n";

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY | BACKGROUND_RED);
	cout << "Text galben stralucitor pe ROSU\n";

	SetConsoleTextAttribute(hConsole, fTEAL | bYELLOW);
	cout << "TEAL (AQUA) pe GALBEN\n";

	SetConsoleTextAttribute(hConsole, fYELLOW + bTEAL);
	cout << "GALBEN pe TEAL (AQUA)\n";

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | BACKGROUND_GREEN);
	cout << "Text ROSU simplu pe VERDE\n";

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
	cout << "Text ROSU simplu\n";

	SetConsoleTextAttribute(hConsole, fBLACK | bBRIGHT_WHITE);
	cout << "Text NEGRU simplu pe ALB\n";

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
	cout << "Text normat ALB pe NEGRU\n";
*/
	cout << "\n\nApasa ENTER";
	cin.get();
	return 0;
}
