///week14-2.cpp �����ҥ�Page 1-7 %s %c Page 6-16
#include <stdio.h>
int main()
{
    char c;
    char s[100]; ///�Ѯv���w�� char line[100]; �ӫŧi
    printf("�п�J���r,�̭��i�H���Ů�,������浲��: ");
    gets(s);
    printf("�AŪ�J�F: %s\n", s);

    printf("�п�J�A���^��W�r,�̭����ί঳�Ů�: ");
    scanf("%s", s);  ///���Υ[ & �Ÿ�
    printf("�A���^��W�r�O: %s", s);

    printf("�ЦA��J�@���A���^��W�r: ");
    scanf("%c", &c); ///���MŪ��F����
    printf("���GŪ��F: %c", c);
}
