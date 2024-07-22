#include <iostream>
#include <cstring>
#include <cctype>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>

using namespace std;

string readString ()
{
    cout << "Please enter a string (Separate by space): " << endl;
    string input;
    getline(cin, input);
    return input;
}

void countCharacter (string input)
{
    int i;
    int n = input.size();
    int temp[n] = {0};
    for ( i=0; i < input.size(); i++)
    {
        int count = 1;
        int j;

        if (temp[i] == 0 )
        {
            for (j=i+1; j < n; j++)
            {
                if (input[i] == input[j])
                {
                    count = count + 1;
                    temp[j] = 1;
                } 
            }
            cout << input[i] << " appears " << count << " time(s)." << endl;
            
        }
    }
}

string ignoreSpace (string input)
{
    int i, j;
    int n = input.size();
    for (i=0; i < n; i++)
    {
        if (input[i] == ' ' || input[i] == '\t')
        {
            for (j=i; j < n; j++)
            {
                input[j] = input[j+1];
            }
            n--;
            i--;
        }
    }
    return input;
}

/* Uppercase or lowercase character string */
void Lower (string &input)
{
    int i;
    for (i=0; i < input.size(); i++)
    {
        input[i] = tolower(input[i]);
    }
}

void Upper (string &input)
{
    int i;
    for (i=0; i < input.size(); i++)
    {
        input[i] = toupper(input[i]);
    }
}
/* /////////////////////////////////////// */

bool isPalindrome (string input)
{
    int i=0;
    int j=input.size()-1;
    while (i<j)
    {
        if(input[i] != input[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main ()
{
    string temp = readString();
    cout << "Your string is: " << temp << endl;

    countCharacter(temp);

    string newString = ignoreSpace(temp);
    cout << "Your new string after spaces were ignored: " << newString << endl;

    Lower(temp);
    cout << "Lowercase character string is: " << temp << endl;

    Upper(temp);
    cout << "Uppercase character string is: " << temp << endl;

    bool answer = isPalindrome(temp);
    if (answer == true)
    {
        cout << "Your character string is a palindrome" << endl;
    }
    else 
    {
        cout << "Your character string is NOT palindrome" << endl;
    }

    sleep (5000);

    return 0;

}