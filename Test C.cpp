#include <stdio.h>

int main ()
{
	int length = 0;
	int n;
	printf("Hay nhap so phan tu cua mang (1-100): ");
	scanf("%d",&n);
	if (n < 1 || n > 100) {
		printf("So phan tu khong hop le hay nhap lai: ");
		return 1;
	}
	length = n;
	int list[n];
	printf("Hay nhap cac phan tu cua mang: \n");
	for (int i = 0; i < n; i++) {
		printf("Phan tu thu %d cua mang la: ", i + 1);
		scanf("%d", &list[i]);
	}
	printf("Mang da nhap la: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	int addindex;
	int currentlength;
	printf("\nHay nhap vi tri muon them vao (0 den %d): ", length);
	scanf("%d", &currentlength);
	if( currentlength < 1 || currentlength > length) {
		printf("Vi tri khong hop le");
		return 1;
	}
	printf("Hay nhap gia tri ban muon them vao: ");
	scanf("%d", &addindex);
	if (currentlength == length) {
		list[length] = addindex;
		length++;
	} else {
		for(int i = length; i > currentlength; i--) {
			list[i] = list[i - 1];
		}
		list[currentlength] = addindex;
		length++;
	}
	printf("Sau khi them phan tu mang se la: ");
	for(int i = 0; i < length; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
	
	return 0;
}
