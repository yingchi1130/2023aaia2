/// week08-2c.cpp �T����
#include <stdio.h>
int main()
{
	printf("�п�J�j�p: ");
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int star = i; ///��n�ӬP�P
		for(int k=1; k<=star;k++) printf("*");

		printf("\n");
	}
}
///��1�Ӧ�1���P
///��2�Ӧ�2���P
///��i�Ӧ�i���P
