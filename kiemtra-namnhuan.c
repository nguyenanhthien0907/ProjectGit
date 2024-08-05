//kiem tra nguoi dung nhap co phai nam nhuan hay ko
//b1: yeu cau nguoi dung nhap nam ma ho muon kiem tra
//b2: dieu kien 1: chia het cho 4 va ko chia het cho 100 
//hoac 1 nam ma chia het cho 400 thi dc goi la nam nhuan
//b3: in ra ket qua

#include <stdio.h>

int main(){
    int nam;
    printf("Moi ban nhap nam: \n");
    scanf("%d",&nam);
    int check = ((nam%4==0) && (nam % 100 != 0)) || (nam %400 ==0);
    printf("%d co phai la nam nhuan hay khong? : %d",nam, check);
    return 0;
}