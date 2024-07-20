#include <iostream>
#include <fstream> // For file I/O
#include <string> 
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>


using namespace std;

// Structure to represent a student's data
struct Student {
    char name[50];
    char ID[50];
    float math_scores;
    float physics_scores;
    float chemistry_scores;
}student;

// Function to write student data to a file
void writeData(const string& filePath) 
{
    ofstream Data(filePath.c_str());
    if (Data.fail()) 
    {
        cerr << "Error: Could not open file for writing: " << filePath << endl;
        return;
    }

    cout << "Enter student data (ID, math, physics, chemistry scores, separated by spaces) for 2 students:" << endl;

    // Loop to write data for number of students
    for (int i = 1; i <= 2; ++i) 
    {
        //Student student; // Create a Student struct to hold data
        // Get user input for each student
        cout << "Enter data for Student " << i << ": ";
        cin >> student.ID >> student.math_scores >> student.physics_scores >> student.chemistry_scores;
        // Write student data to the file
        Data << student.ID << " " << student.math_scores << " " << student.physics_scores << " " << student.chemistry_scores << endl;
    }

    cout << "Data written successfully to " << filePath << endl;
    Data.close(); // Close the file after writing
}

// Function to read student data from a file
void readData(const string& filePath, int Type) 
{
    ifstream Data(filePath.c_str()); // Open file in read mode

    if (Data.fail()) 
    {
        cerr << "Error: Could not open file for reading: " << filePath << endl;
        return; 
    }

    string line; 
    string studentID;
    if( Type == 2)
    {
        cout << "Please enter your ID: " << endl;
        cin >> studentID;
        //Student student; // Create a Student struct to hold data
        while (Data >> student.ID >> student.math_scores >> student.physics_scores >> student.chemistry_scores)
        {
            if ( studentID == student.ID)
            {
                cout << "ID: " << student.ID << ", Math: " << student.math_scores << ", Physics: " << student.physics_scores << ", Chemistry: " << student.chemistry_scores << endl;
                sleep(5000);
            }
        }
        
    }
    else if (Type == 1)
    {
        //Student student; // Create a Student struct to hold data
        while (Data >> student.ID >> student.math_scores >> student.physics_scores >> student.chemistry_scores)
        {
            cout << "ID: " << student.ID << ", Math: " << student.math_scores << ", Physics: " << student.physics_scores << ", Chemistry: " << student.chemistry_scores << endl;
        }
        sleep(5000);
    }
    else
    {
        cout << "Invalid data" << endl;
    }

    Data.close(); // Close the file after reading
}

int main() {
    string filePath = "my_document.txt";

    cout << "Please choose:" << endl;
    cout << "1: Teacher"<< endl;
    cout << "2: Student" << endl;
    int Type;
    cin >> Type;

    if ( Type == 1)
    {
        cout << "If this is your first entering score, please choose option 1" << endl;
        cout << "Please choose one of the options below" << endl;
        cout << "1: Enter score" << endl;
        cout << "2: Assuming see all score" << endl;
        int Option;
        cin >> Option;
        if ( Option == 1)
        {
            writeData(filePath);
        }
        
        if ( Option == 2)
        {
            readData(filePath, Type);
        }
    }
    
    if ( Type == 2)
    {
        readData(filePath, Type);
    }

    else
    {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}