#include <iostream>

using namespace std;

int main()
{
	// Задание №1	======================================================================

	short int h_var{123};
	int b_var = 1'00'000;
	long long c_var = 5235426134235;
	char d_var = 'H';
	bool e = true;
	e = false;
	float f_var = 4.05f;
	double g_var = 3e+92;
	cout << "Hello World" << endl;
	cout << h_var << ", " << b_var << ", " << c_var << ", " << d_var << ", " << e << ", " << f_var << ", " << g_var << endl;

	//Задание №2	======================================================================

	enum faster { x, o, probel, };

	//Задание №3	======================================================================
	
	faster Game[9] = { probel,o,probel,o,x,probel, probel, probel, probel, };

	cout << Game << endl;

	//Задание №4    ======================================================================
	
	struct Stronger
	{
		faster player1; //Игрок 1
		faster player2; //Игрок 2
		char area;
		bool WinnerPlayer1;
		bool WinnerPlayer2;
		bool EndGame;
		char line1[3] = { probel, probel, probel };
		char line2[3] = { probel, probel, probel };
		char line3[3] = { probel, probel, probel };

	};

	//Задание №5	======================================================================
	
	union MyData
	{
		int i;
		float f;
		char c;
	};

	struct MyVariant
	{
		MyData p1;
		unsigned int isInt : 1;
		unsigned int isFloat : 1;
		unsigned int isChar : 1;
	};

	MyVariant n;

	n.isInt = 5;
	n.p1.i = 685;

	n.isFloat = 2;
	n.p1.f = 3.7f;

	n.isChar = 8;
	n.p1.c = true;

	cout << n.p1.i << ", " << n.p1.f << ", " << n.p1.c << ", " << sizeof(3) ;
	
	return 0;
}