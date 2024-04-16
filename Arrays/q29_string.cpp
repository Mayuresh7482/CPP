#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to find the number of occurrences of a given character in the string
int countChar(string str, char c) {
  int count = 0;
  for (char ch : str) {
    if (tolower(ch) == tolower(c)) { // Convert both to lowercase for case-insensitive counting
      count++;
    }
  }
  return count;
}


// Function to find the number of blank spaces in the string
int countBlanks(string str)
{
    return countChar(str, ' ');
}

// Function to find the number of words in the string
int countWords(string str)
{
    int count = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    return count;
}

// Function to find the total number of all the vowels in the string
int countVowels(string str) {
  int count = 0;
  string vowels = "aeiou"; // No need for uppercase vowels since we convert to lowercase
  for (char ch : str) {
    if (vowels.find(tolower(ch)) != string::npos) {
      count++;
    }
  }
  return count;
}


int main()
{
    string str;
    char c;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to find its occurrences in the string: ";
    cin >> c;

    cout << "Number of occurrences of " << c << " in the string: " << countChar(str, c) << endl;
    cout << "Number of blank spaces in the string: " << countBlanks(str) << endl;
    cout << "Number of words in the string: " << countWords(str) << endl;
    cout << "Total number of all the vowels in the string: " << countVowels(str) << endl;

    return 0;
}