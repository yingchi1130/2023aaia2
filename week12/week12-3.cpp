///week12-3.cpp �C�Xn�H�U���������
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
    int ans = 0;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
             printf("%d ", i);
             ans ++;
        }
    }
    printf("�`�@�� %d �ӽ��\n", ans);
}
