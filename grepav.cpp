/*
	GREPAV - The way grep -av should work
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
	 
int main(int argc, char* argv[])
{
	if(argv[1] != NULL && argv[2] != NULL)	
	{
		string needle(argv[1]);
		int numlines = atoi(argv[2]);
	 
		string s;
		int skip = 0;
	 
		while(getline(cin, s))
		{
			if(s.find(needle) != s.npos) skip = numlines;
	 
			if(skip > 0) skip--;
	
			else cout << s << endl;
		}
	}
	else
	{
		cout << "Both args are required" << endl;
	}
}
