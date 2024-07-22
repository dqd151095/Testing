#include <iostream>
using namespace std;

// Hàm hoán đổi giá trị của hai biến sử dụng template
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Hàm tìm giá trị lớn nhất trong ba số sử dụng template
template <typename T>
T findMax(T a, T b, T c) {
    T maxVal = a;
    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }
    return maxVal;
}

int main() {
    // Nhập giá trị từ bàn phím
    int a, b, c;
    cout << "Nhap ba so a, b, c: ";
    cin >> a >> b >> c;

    // Xuất thông tin trước khi hoán đổi
    cout << "Truoc khi hoan doi:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Hoán đổi giá trị của hai biến
    swapValues(a, b);

    // Xuất thông tin sau khi hoán đổi
    cout << "Sau khi hoan doi a va b:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Tìm giá trị lớn nhất trong ba số
    int maxVal = findMax(a, b, c);
    cout << "Gia tri lon nhat trong ba so la: " << maxVal << endl;

    return 0;
}