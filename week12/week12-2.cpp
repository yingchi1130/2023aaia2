///week12-2.cpp �C�Xn�H�U���������
#include <stdio.h>
int isPrime(int n){ ///��Ƥ���㰣
    for(int i=2; i<n ;i++){
        if(n%i==0) return 0; ///����
    }
    return 1; ///���\!!! ��������g�\,���r!!!
}

int main()
{
    printf("�п�J1�Ӽ�:");
    int n;
    scanf("%d", &n);
    for(int i=2;i<=n;i++){
        if(isPrime(i)) printf("%d ", i);
    }
}

