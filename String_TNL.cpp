#include <iostream>
#include <string>
using namespace std;

string data;

/* Function nhap chuoi tu ban phim */
string INPUT()
{
    cout<<"========================================================="<< endl;
    cout << "Nhap data : "<< endl;
    getline(cin, data);
    cout<<"========================================================="<< endl;
    cout << "Data vua nhap : " << data << endl;
    return data;
}

/* Function kiem tra su xuat hien cua mot ki tu trong chuoi nhap tu ban phim */
unsigned int DEM()
{
    unsigned int count = 0;
    cout<<"========================================================="<< endl;
    cout << "Nhap ki tu can kiem tra su xuat hien trong chuoi: " << endl;
    string s_check;
    cout<<"========================================================="<< endl;
    cout << "Nhap data : "<< endl;
    getline(cin, s_check); 
    for(int i = 0; i < (int)data.size(); i++)
    {
        if(data[i] == s_check[0])
        {
            count =  count + 1;
        }
        else
        {
            
        }
    }
    if(count > 0)
    {
        cout<<"========================================================="<< endl;
        cout << "Phan tu vua nhap CO xuat hien trong data: " << count << " lan" << endl;
        cout<<"========================================================="<< endl;
    }
    else
    {
        cout<<"========================================================="<< endl;
        cout << "Phan tu vua nhap KHONG xuat hien trong data" << endl;
        cout<<"========================================================="<< endl;
    }
    return count;
}

/* Function Xoa ki tu khoang trang trong chuoi nhap tu ban phim */
string XOA_KHOANG_TRANG(string s)
{
    for(int i = 0; i < (int)s.size(); i++)
    {
        if(s[i] == ' ')
        {
            s.erase(i, 1);
        }
        else
        {
            
        }
    }
    cout<<"========================================================="<< endl;
    cout << "Chuoi sau khi xoa khoang trang: "<< s << endl;
    cout<<"========================================================="<< endl;
    return s;
}

/* Function chuyen doi IN HOA chuoi nhap tu ban phim */
string IN_HOA(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
	s[i] = toupper(s[i]);
    }
    cout<<"========================================================="<< endl;
    cout << "Chuoi sau khi chuyen doi IN HOA: "<< s << endl;
    cout<<"========================================================="<< endl;
    return s;
}

/* Function chuyen doi IN THUONG chuoi nhap tu ban phim */
string IN_THUONG(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
	s[i] = tolower(s[i]);
    }
    cout<<"========================================================="<< endl;
    cout << "Chuoi sau khi chuyen doi IN THUONG: "<< s << endl;
    cout<<"========================================================="<< endl;
    return s;
}

/* Function kiem tra chuoi Palindrome  */
void CHECK_Palindrome(string s)
{
    bool count = 0;
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        if(s[i] != s[j])
        {
            count = false;
        }
        else
        {
            count = true;
        }
        i++;
        j--;
    }
    if(count == true)
    {
        cout<<"========================================================="<< endl;
        cout << "Chuoi vua nhap la chuoi Palindrome" << endl;
        cout<<"========================================================="<< endl;
    }
    else
    {
        cout<<"========================================================="<< endl;
        cout << "Chuoi vua nhap KHONG PHAI la chuoi Palindrome" << endl;
        cout<<"========================================================="<< endl;
    }
}
 
int main()
{
    INPUT();
    DEM();
    XOA_KHOANG_TRANG(data);
    IN_HOA(data);
    IN_THUONG(data);
    CHECK_Palindrome(data); 
    return 0;
}
