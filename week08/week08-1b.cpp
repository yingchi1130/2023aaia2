///week08-1b.cpp 九九乘法表&畫星星相同之處
#include <stdio.h>
int main()
{
    for(int i=1; i<10; i++){ ///左手i
        for(int j=1; j<=9; j++){ ///右手j
            printf("*");
        }
        printf("i:%d\n", i);
    }
}
