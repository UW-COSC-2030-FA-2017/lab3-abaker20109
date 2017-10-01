// Aaron Baker
// Computer Science 2 - Lab 3

#include <iostream>

using namespace std;

// Factorial Long With Float Output
void factorialLF(long i) 
{
	float t = 1;
	for (int e = 1; e <= i; e++)
	{
		t *= i;
	}

	if (isinf(t))
	{
		cout << "  N Value: " << i << " Factoril total for N: " << t << "   --- returned overflow " << endl;
	}
	else
	{
		cout << "  N Value: " << i << " Factoril total for N: " << t << endl;
	}
}


// Factorial Long With Double Output
void factorialLD(long i)
{
	double t = 1;
	for (int e = 1; e <= i; e++)
	{
		t *= i;
	}

	if (isinf(t))
	{
		cout << "  N Value: " << i << " Factoril total for N: " << t << "   --- returned overflow " << endl;
	}
	else
	{
		cout << "  N Value: " << i << " Factoril total for N: " << t << endl;
	}
}

// sum short consecutive 
void sumShort(short i) 
{
	short t = 0;
	for (int e = 0; e <= i; e++) 
	{
		t += i;
	}

	if (t < 0) 
	{
		cout << "  N Value: " << i << " Consecutive total for N: " << t << "   --- returned val is negative" << endl;
	}
	else 
	{
		cout << "  N Value: " << i << " Consecutive total for N: " << t << endl;
	}
}

// sum long consecutive
void sumLong(long i)
{
	long t = 0;
	for (int e = 0; e <= i; e++)
	{
		t += i;
	}
	
	if (t < 0)
	{
		cout << "  N Value: " << i << " Consecutive total for N: " << t << "   --- returned val is negative" << endl;
	}
	else
	{
		cout << "  N Value: " << i << " Consecutive total for N: " << t << endl;
	}
}

// One Over N Float 1/n -> float
void oneNFloat(float i)
{
	float t = 0.0;
	for (float e = 1; e <= i; e++)
	{
		t = (t + (1 / i));
	}
	t -= 1.0;
	if (t != 0)
	{
		cout << "  N Value: " << i << " One over total for N: " << t << "   --- returned overflow" << endl;
	}
	else
	{
		cout << "  N Value: " << i << " One over total for N: " << t << endl;
	}
}

// One Over N Double 1/n -> double
void oneNDouble(double i)
{
	double t = 0;
	for (int e = 1; e <= i; e++)
	{
		t = (t + (1 / i));
	}
	t -= 1.0;

	if (t != 0)
	{
		cout << "  N Value: " << i << " One over total for N: " << t << "   --- returned overflow" << endl;
	}
	else
	{
		cout << "  N Value: " << i << " One over total for N: " << t << endl;
	}
}

int main()
{
	cout << "----------" << endl;
	cout << "Short Sum For N Values and Consecutive Total" << endl;
	cout << "----------\n" << endl;
	sumShort(250);
	sumShort(251);
	sumShort(252);
	sumShort(253);
	sumShort(254);
	sumShort(255);
	sumShort(256);
	sumShort(257);
	sumShort(258);
	sumShort(259);
	sumShort(260);
	// overflow in this problem can be found because the number will be a negative value
	cout << "\n----------\n" << endl;

	cout << "\n----------" << endl;
	cout << "Long Sum For N Values and Consecutive Total" << endl;
	cout << "----------\n" << endl;
	sumLong(551650);
	sumLong(541651);
	sumLong(531652);
	sumLong(531653);
	sumLong(521654);
	sumLong(511655);
	sumLong(491656);
	sumLong(481657);
	sumLong(471658);
	sumLong(461659);
	sumLong(451660);
	// overflow in this problem can be found because the number will be a negative value
	cout << "\n----------\n" << endl;


	cout << "\n----------" << endl;
	cout << "Float Factorial For N Values and Float Output" << endl;
	cout << "----------\n" << endl;
	factorialLF(10);
	factorialLF(15);
	factorialLF(25);
	factorialLF(30);
	factorialLF(35);
	factorialLF(36);
	factorialLF(37);
	// overflow in this problem can be found because the number will be returned as inf
	cout << "\n----------\n" << endl;

	cout << "\n----------" << endl;
	cout << "Float Factorial For N Values and Double Output" << endl;
	cout << "----------\n" << endl;
	factorialLD(15);
	factorialLD(25);
	factorialLD(30);
	factorialLD(35);
	factorialLD(45);
	factorialLD(55);
	factorialLD(155);
	factorialLD(255);
	factorialLD(355);
	// overflow in this problem can be found because the number will be returned as inf
	cout << "\n----------\n" << endl;

	cout << "\n----------" << endl;
	cout << "One Over N Values and Float I/O" << endl;
	cout << "----------\n" << endl;
	oneNFloat(13);
	oneNFloat(14);
	oneNFloat(15);
	oneNFloat(16);
	oneNFloat(17);
	oneNFloat(18); 
	// overflow in this problem can be found because the number that is being returned will not be 0
	cout << "\n----------\n" << endl;
	
	cout << "\n----------" << endl;
	cout << "One Over N Values and Double I/O" << endl;
	cout << "----------\n" << endl;
	oneNDouble(5);
	oneNDouble(10);
	oneNDouble(13);
	oneNDouble(14);
	oneNDouble(15);
	oneNDouble(16);
	oneNDouble(17);
	oneNDouble(18); 
	// overflow in this problem can be found because the number that is being returned will not be 0
	cout << "\n----------\n" << endl;

	// Puzzle As Float
	cout << "\n----------" << endl;
	cout << "Puzzle As Float" << endl;
	cout << "----------\n" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	};
	cout << "\n----------\n" << endl;



	// Puzzle as Double
	cout << "\n----------" << endl;
	cout << "Puzzle As Double" << endl;
	cout << "----------\n" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	};
	cout << "\n----------\n" << endl;

	// The puzzle as a float will return the correct values for iterating by 0.2 because of the accuracy 
	// since float is able to move out more decimal places than a double is able to we are able to gain better 
	// accuarcy with our numbers and able to iterate at different increments then we are able to with 
	// double or int.


	system("PAUSE");
    return 0;
}

