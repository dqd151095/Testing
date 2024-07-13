#include <iostream>
#include <string>

// Struct điểm sinh viên
struct SinhVien 
{
    std::string ten;
    char maSV[10];
    float diemToan;
    float diemLy;
    float diemHoa;
};

// Hàm nhập thông tin cho một sinh viên
void ThongTinSinhVien(SinhVien* sv) 
{
    std::cout << "Nhap ten sinh vien: ";
    std::getline(std::cin, sv->ten); // Sử dụng std::getline để nhập chuỗi có dấu cách trong C++

    std::cout << "Nhap ma sinh vien: ";
    std::cin >> sv->maSV;

    std::cout << "Nhap diem Toan: ";
    std::cin >> sv->diemToan;

    std::cout << "Nhap diem Ly: ";
    std::cin >> sv->diemLy;

    std::cout << "Nhap diem Hoa: ";
    std::cin >> sv->diemHoa;
}

// Hàm in thông tin cho một sinh viên
void InThongTinSinhVien(SinhVien* sv) 
{
    std::cout << "Ten: " << sv->ten << std::endl;
    std::cout << "Ma sinh vien: " << sv->maSV << std::endl;
    std::cout << "Diem Toan: " << sv->diemToan << std::endl;
    std::cout << "Diem Ly: " << sv->diemLy << std::endl;
    std::cout << "Diem Hoa: " << sv->diemHoa << std::endl;
}

// Hàm chính
int main() 
{
    // Khai báo mảng sinhVien để lưu trữ thông tin của nhiều sinh viên
    SinhVien sinhVien[50];

    // Xác định số lượng sinh viên muốn nhập
    int soLuongSV;
    std::cout << "Nhap so luong sinh vien: ";
    std::cin >> soLuongSV;
    std::cin.ignore(1);         // Loại bỏ ký tự xuống dòng (`\n`) sau khi nhập

    // Nhập thông tin cho từng sinh viên
    for (int i = 0; i < soLuongSV; i++) 
    {
        ThongTinSinhVien(&sinhVien[i]);
        std::cin.ignore(1);     // Loại bỏ ký tự xuống dòng (`\n`) sau khi nhập tên
    }

    // In thông tin cho tất cả sinh viên
    for (int i = 0; i < soLuongSV; i++) 
    {
        std::cout << "\nThong tin sinh vien " << i + 1 << ":\n";
        InThongTinSinhVien(&sinhVien[i]);
    }

    return 0;
}