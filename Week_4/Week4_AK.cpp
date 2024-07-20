#include <iostream>
#include <string> 
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>

using namespace std;

template <typename T> 
void Swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp; 
}

template <typename T> 
T Max(T c, T d, T e)
{
    T temp = (c > d) ? c : d;
    return (temp > e) ? temp : e;
}

int main ()
{
    int int1, int2, int3;
    cout << "Enter three number: ";
    cin >> int1 >> int2 >> int3;

    float float1, float2, float3;
    cout << "Enter three number: ";
    cin >> float1 >> float2 >> float3;

    char char1, char2, char3;
    cout << "Enter three letter: ";
    cin >> char1 >> char2 >> char3;

    cout << "Your string: " << "a = " << int1 << ", b = " << int2 << ", c = " << int3 << endl;
    Swap<int>(int1, int2);
    cout << "New value of two variable: " << "a = " << int1 << ", b = " << int2 << ", c = " << int3 << endl;
    cout << "Maximum value of int: " << Max <int> (int1, int2, int3) << endl;

    cout << "==============================================================================================" << endl;

    cout << "Your string: " << "1: " << float1 << ", 2: " << float2 << ", 3: " << float3 << endl;
    Swap<float>(float1, float2);
    cout << "New value of two letter: " << "1: " << float1 << ", 2: " << float2 << ", 3: " << float3 << endl;
    cout << "Maximum value of float: " << Max <float> (float1, float2, float3) << endl;

    cout << "==============================================================================================" << endl;

    cout << "Your string: " << "1: " << char1 << ", 2: " << char2 << ", 3: " << char3 << endl;
    Swap<char>(char1, char2);
    cout << "New value of two letter: " << "1: " << char1 << ", 2: " << char2 << ", 3: " << char3 << endl;
    cout << "Maximum value for char: " << Max <char> (char1, char2, char3) << endl;

    sleep (5000);
}