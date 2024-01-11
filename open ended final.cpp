#include<iostream>
using namespace std;

int first_array[5];
int second_array[7];
int final_array[13];
int temp = 0;

void add_array()
{
	//First 5 Indexes
	for (int i = 0; i < 5; i++)
	{
		temp = first_array[i];
		for (int j = i; j <= 12; j++)
		{
			final_array[j] = temp;
		}
	}
	//Last 7 indexes
	for (int i = 0; i < 7; i++)
	{
		temp = second_array[i];
		for (int j = i + 5; j <= 12; j++)
		{
			final_array[j] = temp;
		}
	}
	//Bubble Sort Method (For Ascending Order)
	for (int i = 0; i < 13; i++)
	{
		for (int j = i + 1; j < 13; j++)
		{
			if (final_array[i] > final_array[j])
			{
				temp = final_array[i];
				final_array[i] = final_array[j];
				final_array[j] = temp;
			}
		}
	}
}

int main()
{
	//Get arrayay 1
	cout << "Array 1" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> first_array[i];
	}

	//Get arrayay 2
	cout << "Array 2" << endl;
	for (int i = 0; i < 7; i++)
	{
		cin >> second_array[i];
	}
	//Merge Function Call
	add_array();
	//Display Final arrayay
	cout << "Final Array:" << endl;
	cout << "[";
	for (int i = 0; i < 13; i++)
	{
		cout << final_array[i] << "\t";
	}
	cout << "]";
	cout << endl;

	cout << endl;
	char string[10];
	int length = 0;
	bool isPalindrome = false;
	cout << "Enter a sentence: ";
	cin >> string;
	length = strlen(string);
	for (int i = 0; i < length; i++)
	{
		if (string[i] = string[length - i - 1])
		{
			isPalindrome = true;
		}
	}
	if (isPalindrome)
	{
		cout << "\nSentence is a Palindrome" << endl;
	}
	if (!isPalindrome)
	{
		cout << "\nSentence is not a Palindrome" << endl;
	}
	return 0;
}