#include <stdio.h>
#include <math.h>

int isPrime(int n) 
{
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() 
{
    int n, num, index, choice;
    
    while (1) 
	{
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. in ra cac gia tri cac phan tu dang quan li\n");
        printf("3. In rs cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        int list[n];

        switch (choice) {
            case 1:
                printf("Nhap so phan tu can nhap: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu: ");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &list[i]);
                }
                break;

            case 2:
                printf("Cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", list[i]);
                }
                printf("\n");
                break;

            case 3:
                {
                    int sum = 0;
                    printf("Cac phan tu chan: ");
                    for (int i = 0; i < n; i++) {
                        if (list[i] % 2 == 0) {
                            printf("%d ", list[i]);
                            sum += list[i];
                        }
                    }
                    printf("\nTong cac phan tu chan: %d\n", sum);
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Mang rong!\n");
                } else {
                    int max = list[0], min = list[0];
                    for (int i = 1; i < n; i++) {
                        if (list[i] > max) max = list[i];
                        if (list[i] < min) min = list[i];
                    }
                    printf("Gia tri lon nhat: %d\nGia tri nho nhat: %d\n", max, min);
                }
                break;

            case 5:
                {
                    int sum = 0;
                    printf("Cac so nguyen to trong mang: ");
                    for (int i = 0; i < n; i++) {
                        if (isPrime(list[i])) {
                            printf("%d ", list[i]);
                            sum += list[i];
                        }
                    }
                    printf("\nTong cac so nguyen to: %d\n", sum);
                }
                break;

            case 6:
                printf("Nhap so can thong ke: ");
                scanf("%d", &num);
                {
                    int count = 0;
                    for (int i = 0; i < n; i++) {
                        if (list[i] == num) {
                            count++;
                        }
                    }
                    printf("So %d xuat hien %d lon trong mang.\n", num, count);
                }
                break;

            case 7:
                printf("Nhap so phan tu can them: ");
                scanf("%d", &num);
                printf("Nhap vi tri can them(0 den %d): ", n);
                scanf("%d", &index);
                if (index >= 0 && index <= n) {
                    for (int i = n; i > index; i--) {
                        list[i] = list[i - 1];
                    }
                    list[index] = num;
                    n++;
                    printf("Da them phan tu %d vao vi tri %d\n", num, index);
                } else {
                    printf("Vi tri khong hop le\n");
                }
                break;

            case 8:
                printf("Thoat\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long chon lai\n");
                break;
        }
    }

    return 0;
}

