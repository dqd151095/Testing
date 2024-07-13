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

#include <stdio.h>

// Declare variable
int n;                      // Kích thước mảng
int arr[100];               // Mảng số nguyên ( tối đa 100 số nguyên)

// Tìm giá trị lớn nhất
int MaxArr()
{
    // Khai báo biến 
    int a;
    // Tìm giá trị lớn nhất
    for(int i = 0 ; i < n; i++)
    {
        if (arr[i]<arr[i+1])
        {
            a = arr[i+1];
        }
    }
    // In ra màn hình giá trị lớn nhất 
    printf("Max value in array: %d", a);
    return a;
}

// Tìm giá trị nhỏ nhất
int MinArr()
{
    // Khai báo biến 
    int b;
    // Tìm giá trị nhỏ nhất
    for(int i = 0 ; i < n; i++)
    {
        if (arr[i]<arr[i+1])
        {
            b = arr[i];
        }
    }
    // In ra màn hình giá trị nhỏ nhất 
    printf("Min value in array: %d", b);
    return b;
}

int main()
{
    // Nhập kích thước mảng
    printf("Size of array: ");
    scanf("%d", &n); // Nhập kích thước mảng từ bàn phím
    
    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) 
    {
        printf("Input element value in array %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    
    MaxArr(); // Giá trị lớn nhất
    MinArr(); // Giá trị nhỏ nhất
    
    return 0;
}