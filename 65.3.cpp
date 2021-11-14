#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class plik
{
public:

	ifstream plik1;
     plik();

};

plik::plik()

{
	
plik1.open("plik1.txt");

}

class oblicz
{
	
	public:
		
    	int licz = 0;
    	int nwd(int x, int y);

};

int oblicz::nwd(int x, int y)
{
	while (x != y)
    	if (x > y)
        	x -= y;
    	else
	y -= x;
		return x;
}


int main()
{
	int number1, number2;
	plik p;
	oblicz o;
	while (!p.plik1.eof())
	{
    	p.plik1 >> number1 >>number2;
    	o.licz += number1 /o.nwd(number1, number2);
	}
		cout << o.licz;
}

 
