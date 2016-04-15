// SCRIM_Output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

const int Maxlines = 10000;

int main()
{
	//opens the file under the filename
	ifstream file1 ("COLLISION.txt");

	//tests to see if the file opened correctly
	if (!file1)
	{
		cerr << "Sorry can't open requested file" << endl;
		system("pause");
		return 1;
	}
	//define all variables going to use
	//string Copyfilebuffer, Datafile[Maxlines]; not using

	//Dynamically allocate memory
	string * Datafile = new string[Maxlines];
	string * Copyfilebuffer = new string;

	//this is the total lines of the file being read in
	int totlines = 0;
	//this is the total amount of lines of data that i need
	int totdatalines = 0;
	 
	//parse through the entire file going through all the data
	while (!file1.eof())
	{
		//make sure to copy the entire file 
		cout << "HMMMMM" << endl;
		getline(file1, *Copyfilebuffer);
		cout << *Copyfilebuffer << endl;
	
		
		if (Copyfilebuffer[1] == '0')
		{
			//copy the line in copyfilebuffer that i want into datafile so that everything i need is just in one area
			Datafile[totdatalines].assign(Copyfilebuffer);
			//cout << Datafile[totdatalines];
			totdatalines++;
		}

		//cout << " the貧ouse "<< endl;

		//calculate the total number of lines in the document
		totlines++;
	}
	
	//Check to make sure that i am not overwriting the matrix get error that it can't write to array
	if (totlines > Maxlines)
	{
		cerr << "Sorry the max size of array isn't enough to hold the data. Please change the size to larger" << endl;
		return 2;
	}
	
	//check to make sure that reading the correct number of maxlines
	cout << totlines << endl;

	//go through the entire document just looking for the lines of data that i need 
//	for (int LineNum = 0; LineNum < totlines; LineNum++)
	{
		//cout << Copyfile[LineNum][1] << endl;
		//if (Copyfile[LineNum][1] == '0')
		{
			//copy the line in copyfile that i want into datafile so that everything i need is just in one area
			//Datafile[totdatalines].assign(Copyfile[LineNum]);
			//cout << Datafile[LineNum];
			//totdatalines++;
		}
	}
	cout << "HELLOO" << endl;
	//Let me save the size of Datafile
	//Now I shall go through the code and put all the necessary values in the necessary parts
	int atomNum = 0;
	double X[Maxlines];
	double Y[Maxlines];
	double Z[Maxlines];
	double Energyleft[Maxlines];
	double RecoilEnergy[Maxlines];
	string buffer;
	

	for (int LineNum = 0; LineNum < totdatalines; LineNum++)
	{
		cout << Datafile[LineNum] << endl;

		//get the atom number
		buffer = Datafile[LineNum].substr(1, 5);
		//cout << buffer << " " << stod(buffer) << endl;
		atomNum = stoi(buffer);
		//get the energy leftover
		buffer = Datafile[LineNum].substr(7, 9);
		Energyleft[LineNum] = stod(buffer);
		//Now we get all the directions of the atom with coordinate system X+(depth) and Y+(up) and Z+(left)
		buffer = Datafile[LineNum].substr(17, 10);
		X[LineNum] = stod(buffer);
		buffer = Datafile[LineNum].substr(28, 10);
		Y[LineNum] = stod(buffer);
		buffer = Datafile[LineNum].substr(39, 10);
		Z[LineNum] = stod(buffer);
		//Now I get the Recoil Energy
		buffer = Datafile[LineNum].substr(63, 10);
		RecoilEnergy[LineNum] = stod(buffer);
		
		//Check to make sure that I am reading all the values correctly
		//cout << atomNum << " " << Energyleft[LineNum] << " " << X[LineNum] << " " << Y[LineNum] << " " << Z[LineNum] << " " << RecoilEnergy[LineNum] << endl;
	}
	
	system("pause");
	delete[] Datafile;
	delete Copyfilebuffer;
	file1.close();
	return 0;
}
