///week14-1.cpp
# include <stdio.h>
void myPrint(int x[3][4] ){
    for(int i=0; i<3; i++){ ///����i
        for(int j=0; j<4; j++){ ///�k��j
            printf("%2d ", x[i][j] );
        }
        printf("\n");
    }
    printf("\n");
}
int d[3][4]; ///global���ܼ�,�|�ܦ�0
int globalInt; ///global���ܼ�,�|�ܦ�0
int main()
{
    int a[3][4]; ///�}�C���ŧi,�S����, �|�O�ýX
    int b[3][4] = {1,2,3}; ///������,���S����
    int c[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    ///��������,����
    myPrint(a); ///���U�� Python C Tutor ��, �n���ѱ�, �]�ýX�|�X��
    myPrint(b);
    myPrint(c); ///���[��L�X�Ӫ���, �P�ɫ�� ����i�k��j
    myPrint(d);
    int localInt; ///local�ܼ�,�S������,�N�|�ýX
    printf("globalInt:%d localInt:%d\n", globalInt, localInt);
}
