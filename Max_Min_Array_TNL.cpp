
#include <iostream>
using namespace std;

#define MAX 1000

/* Function input cac phan tu cua Mang */
void ArrInput(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Phan tu o vi tri thu "<< i <<": " << endl;
        cin>>a[i];
    }
}

/* Function tim Max */
int MaxArr(int a[], int x)
{
    int max = a[0];
    for(int i=1; i < x; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{    
    int unsigned n;
    int max;
    int Arr[MAX];
    do
    {
        cout<<"=========================================="<< endl;
        cout<<"  SO LUONG PHAN TU TOI DA CUA MANG LA "<< MAX << endl;
        cout<<"=========================================="<< endl;
        cout<<"Vui long nhap so luong phan tu phu hop: " << endl;
        cin>>n; 
    } while (n> MAX); 
    ArrInput(Arr, n);
    max = MaxArr(Arr,n);
    cout<<"Gia tri lon nhat cua mang da nhap la: "<< max << endl;
    return 0;
}
