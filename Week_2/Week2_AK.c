/*Viết chương trình C sử dụng hàm để tìm giá trị lớn nhất trong một mảng số nguyên. Mảng có thể được nhập từ bàn phím.
Yêu cầu:
Sử dụng hàm để thực hiện các thao tác:
Nhập mảng
Tìm giá trị lớn nhất trong mảng
In ra giá trị lớn nhất tìm được
Sử dụng mảng một chiều
Có thể sử dụng các hàm thư viện C++ (nếu cần thiết)*/
/*======================================================================================================================*/
#include <stdio.h>
#include <string.h>

int FindMax(int arr[], int n) {
    int max = arr[0]; // Initialize max value

    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else 
        {
            //Do nothing
        }
    }

    return max;
}

int main() {
    int arr[1000];

    printf("Enter the array elements (separated by spaces): ");
    fgets(arr, sizeof(arr) + 1, stdin);

    int i;
    int newSize = 0; // Counter for non-whitespace characters
    for (i = 0; i < strlen(arr); i++) { // strlen(arr) is an actual length of the array
        if (arr[i] != '\t' && arr[i] != ' ') {
            newSize++;
        }
        else 
        {
            //Do nothing
        }
    }

    int newArr[newSize]; // Declare newArr with the correct size
    int newIndex = 0;
    for (i = 0; i < strlen(arr); i++) {
        if (arr[i] != '\t' && arr[i] != ' ') {
            newArr[newIndex++] = atoi(&arr[i]); // Convert char to int
        }
        else 
        {
            //Do nothing
        }
    }

    int Max = FindMax(newArr, newSize); // Use newSize for newArr size
    printf("The max value is: %d\n", Max);

    return 0;
}