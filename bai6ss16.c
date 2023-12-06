#include <stdio.h>
struct SinhVien {
    char ho_ten[100];
    int tuoi;
    char so_dien_thoai[15];
    char email[100];
};

int main() {
    int so_luong_sv;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &so_luong_sv);
    struct SinhVien danh_sach_sv[so_luong_sv];
    for (int i = 0; i < so_luong_sv; i++) {
        printf("\nNhap thong tin sinh vien %d:\n", i + 1);
        printf("Ho va ten: ");
        scanf("%s", danh_sach_sv[i].ho_ten);

        printf("Tuoi: ");
        scanf("%d", &danh_sach_sv[i].tuoi);

        printf("So dien thoai: ");
        scanf("%s", danh_sach_sv[i].so_dien_thoai);

        printf("Email: ");
        scanf("%s", danh_sach_sv[i].email);
    }
    FILE *file = fopen("//Users//lemanh//Desktop//students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.");
        return 1;
    }

    for (int i = 0; i < so_luong_sv; i++) {
        fprintf(file, "%s, %d, %s, %s\n", danh_sach_sv[i].ho_ten, danh_sach_sv[i].tuoi,
                danh_sach_sv[i].so_dien_thoai, danh_sach_sv[i].email);
    }
    fclose(file);
    printf("\nThong tin sinh vien da duoc luu vao file students.txt.\n");

    return 0;
}
