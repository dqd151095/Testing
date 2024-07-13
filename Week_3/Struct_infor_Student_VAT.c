#include <stdio.h>
#include <string.h>

// Struct điểm sinh viên
typedef struct SinhVien {
  char ten[50];             // Khai báo kiểu dữ liệu tên sinh viên tối đa 50 kí tự
  char maSV[10];            // Khai báo kiểu dữ liệu mã số sinh viên tối đa 10 kí tự
  float diemToan;           // Khai báo kiểu dữ liệu điểm Toán
  float diemLy;             // Khai báo kiểu dữ liệu điểm Lý
  float diemHoa;            // Khai báo kiểu dữ liệu điểm Hóa
} SinhVien;

void ThongTinSinhVien(SinhVien *sv) 
{
    // Nhập tên sinh viên
    printf("Nhap ten sinh vien: ");
    fgets(sv->ten, sizeof(sv->ten), stdin); // Hàm fgets() trong thư viện string.h nhập tên và lưu trữ tên
    sv->ten[strlen(sv->ten) - 1] = '\0';    // Loại bỏ ký tự xuống dòng '\n' khỏi chuỗi

    // Nhập mã số sinh viên
    printf("Nhap ma sinh vien: ");
    scanf("%s", sv->maSV);

    // Nhập điểm toán
    printf("Nhap diem Toan: ");
    scanf("%f", &sv->diemToan);

    // Nhập điểm lý
    printf("Nhap diem Ly: ");
    scanf("%f", &sv->diemLy);
    
    // Nhập điểm Hóa
    printf("Nhap diem Hoa: ");
    scanf("%f", &sv->diemHoa);
}

void InThongTinSinhVien(SinhVien *sv) 
{
    // In thông tin sinh viên ra màn hình
    printf("\nThong tin sinh vien:\n");
    // In Tên sinh viên ra màn hình
    printf("Ten: %s\n", sv->ten);
    // In mã số sinh viên ra màn hình
    printf("Ma sinh vien: %s\n", sv->maSV);
    // In điểm toán ra màn hình
    printf("Diem Toan: %.2f\n", sv->diemToan);
    // In điểm lý ra màn hình
    printf("Diem Ly: %.2f\n", sv->diemLy);
    // In điểm hóa ra màn hình
    printf("Diem Hoa: %.2f\n", sv->diemHoa);
}

int main() 
{
    // Khai báo mảng sinhVien để lưu trữ thông tin của nhiều sinh viên
    SinhVien sinhVien[50];
    
    // Xác định số lượng sinh viên muốn nhập
    int soLuongSV;
    printf("Nhap so luong sinh vien: ");
    scanf("%d[^\n]", &soLuongSV);
    getchar();                      // xóa ký tự '\n' khỏi bộ đệm

    // Nhập thông tin cho từng sinh viên
    for (int i = 0; i < soLuongSV; i++) 
    {
        ThongTinSinhVien(&sinhVien[i]);
        getchar();                  // xóa ký tự '\n' khỏi bộ đệm
    }

    // In thông tin cho tất cả sinh viên
    for (int i = 0; i < soLuongSV; i++) 
    {
        InThongTinSinhVien(&sinhVien[i]);
    }
  return 0;
}