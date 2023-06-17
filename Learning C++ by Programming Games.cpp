
#include <iostream>
#include <string>
#include <ctime>
#include <fstream> 
#include <memory>
#include <vector>
#include <algorithm>
using namespace std;


//Copy Dynamic Array One to Another


void FeelArray(int* arr, int size)
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = rand() % 20;
	}
}

void PrintArray(const int* arr, const int size)
{
	cout << " First Array " << endl;

	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
    int size;
	cin >> size;
	cout << endl;
	int* arr = new int[size];
	
	FeelArray(arr, size);
	PrintArray(arr, size);
	
	int SecondSize = size + 1;            
	int* SecondArr = new int[SecondSize];

	for (int i = 0;i < size;i++)
	{            
		SecondArr[i] = arr[i];     
	}
	
	cout << " Second Array With + 1 Number " << endl;

	for (int i = 0;i < size + 1;i++)
	{
		SecondArr[SecondSize-1] = 600;          
		cout << SecondArr[i] << endl;
	}


	delete[]SecondArr;
	delete[]arr;


	return 0;


}

