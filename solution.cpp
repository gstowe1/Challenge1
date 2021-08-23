#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;



int main()
{
	int num; //Number of elements in a array
	int rot; // Number of times in which a element should be rotated
	char dir; // Charater that determinds which direction to shif the elements
	
	int Mod;

	vector<int> rotArray;// array in which array is stored and manipulated
	vector<int> finalRotArray;

	int userInput; //user input

	while(cin >> num >> rot >> dir)
	{
		for(int i = 0; i < num; i++)
		{
			cin >> userInput;
			rotArray.push_back(userInput);		
		}	

	Mod = rot % num;
//	cout << Mod << " " << num << " " << rot << " " << dir << endl;
	if(Mod >= 0)
	{
		if(dir == 'R')
		{
			
			for(int i = num - Mod; i < num; i++)
			{
				finalRotArray.push_back(rotArray[i]);
			}
			for(int j = 0; j < num - Mod; j++)
			{
				finalRotArray.push_back(rotArray[j]);
			}

		}
		else
		{
			
			for(int i = Mod; i < num; i++)
			{	
				finalRotArray.push_back(rotArray[i]);
			}
			for(int j = 0; j < Mod; j++)
			{
				finalRotArray.push_back(rotArray[j]);
			}

			
		}
	}
	
	for(int i = 0; i < num; i++)
	{
		if(i < num-1)
		cout << finalRotArray[i] << " ";
		else
		cout << finalRotArray[i];
	}
	cout << endl;
	rotArray.clear();
	finalRotArray.clear();
	}
	
	return 0;
}
