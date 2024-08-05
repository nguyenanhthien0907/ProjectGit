#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 5

int main() {
    int number, guess, attempts = 0;

    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(time(NULL));

    // Sinh số ngẫu nhiên từ 1 đến 100
    number = rand() % 100 + 1;

    printf("Chào mừng đến với trò chơi đoán số!\n");
    printf("Tôi đã chọn một số từ 1 đến 100. Bạn có %d lần đoán để tìm ra số đó.\n", MAX_ATTEMPTS);

    // Vòng lặp cho phép người chơi đoán
    while (attempts < MAX_ATTEMPTS) {
        printf("Lần đoán thứ %d: Nhập số của bạn: ", attempts + 1);
        scanf("%d", &guess);

        // So sánh số người chơi đoán với số máy tính chọn
        if (guess > number) {
            printf("Số bạn đoán quá lớn. Hãy thử lại.\n");
        } else if (guess < number) {
            printf("Số bạn đoán quá nhỏ. Hãy thử lại.\n");
        } else {
            printf("Chúc mừng! Bạn đã đoán đúng số %d sau %d lần đoán.\n", number, attempts + 1);
            return 0;
        }

        attempts++;
    }

    // Nếu hết lượt đoán mà không đúng
    printf("Rất tiếc, bạn đã hết lượt đoán. Số đúng là %d.\n", number);

    return 0;
}
