
#include <iostream>
#include <string.h>
using namespace std;

#define MAX 1000

/* Tao global Struct chua thong tin cua 1 Sinh vien */
struct  Studen_Infor {  
    char Ten[10];
    char MSSV[10];
    int unsigned Diem_Toan;
    int unsigned Diem_Ly;
    int unsigned Diem_Hoa;
};

/* Tao global Array chua thong tin nhieu Sinh vien */
Studen_Infor Arr[MAX];

/* Function input cac phan tu cua Struct - input các thông tin 1 Sinh vien*/
Studen_Infor StructInput(Studen_Infor Student)
{
    cout<<"=========================================="<< endl;
    do
    {
    cout<<"Nhap Ten Sinh Vien: ";
    cin>>Student.Ten;
    }
    while ((strlen(Student.Ten) > 10) || (strlen(Student.Ten) < 1));

    do
    {
    cout<<"Nhap MSSV Sinh Vien: ";
    cin>>Student.MSSV;
    }
    while ((strlen(Student.MSSV) > 10) || (strlen(Student.MSSV) < 1));

    do
    {
    cout<<"Nhap Diem Toan Sinh Vien: ";
    cin>>Student.Diem_Toan;
    }
    while ((Student.Diem_Toan > 10) || (Student.Diem_Toan < 0));

    do
    {
    cout<<"Nhap Diem Ly Sinh Vien: ";
    cin>>Student.Diem_Ly;
    }
    while ((Student.Diem_Ly > 10) || (Student.Diem_Ly < 0));

    do
    {
    cout<<"Nhap Diem Hoa Sinh Vien: ";
    cin>>Student.Diem_Hoa;
    }
    while ((Student.Diem_Hoa > 10) || (Student.Diem_Hoa < 0));
    
    cout<<"=========================================="<< endl;
    return Student;
}

/* Function in ra cac phan tu cua Struct - in ra các thông tin 1 Sinh vien */
void Print_Student_Infor(Studen_Infor Student)
{
    cout<<"Ten Sinh Vien: "<< Student.Ten << endl;
    cout<<"MSSV: "<< Student.MSSV << endl;
    cout<<"Diem Toan: "<< Student.Diem_Toan << endl;
    cout<<"Diem Ly: "<< Student.Diem_Ly << endl;
    cout<<"Diem Hoa: "<< Student.Diem_Hoa << endl;
}

/* Function main */
int main()
{
    int unsigned n;
    do
    {
        cout<<"========================================================="<< endl;
        cout<<"  SO LUONG THONG TIN SINH VIEN CÓ THE LUU TRU LA "<< MAX << endl;
        cout<<"========================================================="<< endl;
        cout<<"Vui long nhap so luong Sinh Vien phu hop: " << endl;
        cin>>n; 
    } while (n> MAX); 

    for(int i=0; i<n; i++)
    {
        int y=0;
        y=i+1;
        cout<<"Vui long nhap Thong tin Sinh Vien thu "<< y << endl;
        //cout<<"=========================================="<< endl;
        Arr[i] = StructInput(Arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        int y=0;
        y=i+1;
        cout<<"THONG TIN SINH VIEN THU "<< y << endl;
        cout<<"=========================================="<< endl;
        Print_Student_Infor(Arr[i]);
        cout<<"=========================================="<< endl;
    }
    return 0;
}