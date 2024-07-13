/*# Testing
2nd week: Kick-Off with demo task
Bài tập: Tìm giá trị lớn nhất trong mảng
Mô tả bài tập:
Viết chương trình C sử dụng hàm để tìm giá trị lớn nhất trong một mảng số nguyên. Mảng có thể được nhập từ bàn phím
Yêu cầu:
    • Sử dụng hàm để thực hiện các thao tác: 
    • Nhập mảng
    • Tìm giá trị lớn nhất trong mảng
    • In ra giá trị lớn nhất tìm được
    • Sử dụng mảng một chiều
Có thể sử dụng các hàm thư viện C++ (nếu cần thiết)
Hint: sử dụng thuật toán sắp xếp để tìm GTLN, GTNN
Due date: 30-Jun */

#include <iostream>
#include <algorithm>

using namespace std;

// Declare variable
int n;                      // Kích thước mảng
int arr[100];               // Mảng số nguyên ( tối đa 100 số nguyên)

// Tìm giá trị lớn nhất 
int MarArr()
{     
    // Tìm giá trị lớn nhất ( max_element là một hàm trong thư viện <algorithm> của C++ được sử dụng 
    // để tìm phần tử có giá trị lớn nhất trong một phạm vi )
    int maxValue = *max_element(arr, arr + n);

    // In ra giá trị lớn nhất
    cout << "Max value in array: " << maxValue << endl;

    return 0;
}

int MinArr()
{
    // Tìm giá trị nhỏ nhất ( min_element là một hàm trong thư viện <algorithm> của C++ được sử dụng 
    // để tìm phần tử có giá trị nhỏ nhất trong một phạm vi )
    int minValue = *min_element(arr, arr + n);

    // In ra giá trị nhỏ nhất
    cout << "Min value in array: " << minValue << endl;

    return 0;
}

int main() 
{
    // Nhập kích thước mảng
    cout << "Input size of array: ";
    cin >> n;

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) 
    {
        cout << "Input element value in array " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    MarArr();                   // Tìm giá trị lớn nhất  
    MinArr();                   // Tìm giá trị nhỏ nhất

    return 0;
}