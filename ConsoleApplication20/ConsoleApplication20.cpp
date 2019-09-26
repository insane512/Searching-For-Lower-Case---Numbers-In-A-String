// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cctype>
using namespace std;






int main()
{
   
	
	char name[] =  "he1llO" ;
	int x = 0;

	while (name[x])
	{
	   
		if (isalpha(name[x]))
		{
			cout << name[x] << " Is A Letter!" << endl;

        if (islower(name[x]))
		{
			cout << name[x] << " Is A Lower Case Letter!" << endl;

		}


		else
		{
			cout << name[x] << " Is Not A Lower Case Letter!" << endl;
		}



		}
		
		else
		{
			cout << name[x] << " Is Not A Letter!" << endl;
		}



		





		++x;
	
	}
	
	
	
	


}

