
#include <iostream>
using namespace std;

/* Function hoan doi gia tri 2 bien */
template <typename Type>
void Swap(Type& x, Type& y)
{
	Type Temp = x;
	x = y;
	y = Temp;
}

/* Function tim gia tri lon nhat cua 3 gia tri nhap tu ban phim */
template <typename Type>
Type Max_of_Value(Type a, Type b, Type c)
{
    Type Max = a;
    if(b > Max)
    {
        Swap(b, Max);
    }
    if(c > Max)
    {
        Swap(c, Max);
    };
    return Max;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout<<"========================================================="<< endl;
    cout<<"Vui long nhap gia tri thu 1: ";
    cin>>a; 
    cout<<"========================================================="<< endl;
    cout<<"Vui long nhap gia tri thu 2: ";
    cin>>b;
    cout<<"========================================================="<< endl;
    cout<<"Vui long nhap gia tri thu 3: ";
    cin>>c; 
    cout<<"=========================================="<< endl;
    cout<<"PROCESSING........................."<< endl;
    cout<<"THONG TIN BAN DAU"<< endl;
    cout<<"=========================================="<< endl; 
    cout<<"Gia tri thu 1 duoc nhap: " << a << endl;
    cout<<"Gia tri thu 2 duoc nhap: " << b << endl;
    cout<<"Gia tri thu 3 duoc nhap: " << c << endl;
    cout<<"=========================================="<< endl;
    cout<<"PLEASE WAIT........................."<< endl;
    cout<<"=========================================="<< endl; 
    cout<<"MAXIMUM IS: "<< Max_of_Value(a, b, c) << endl;
    cout<<"=========================================="<< endl;
    return 0;    
}
