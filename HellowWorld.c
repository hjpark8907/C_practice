#include <stdio.h>
#include <float.h>
//#include <conio.h>
//int main(void)
//{
//	// ex 1
////	printf("Hello, World!\n");
////	return 0;
//
//	double dData = 123.456;
//
//	printf("%f\n", dData);
//	printf("%E - %E\n", DBL_MIN, DBL_MAX);
//	return 0;
//}

// ex 2
//int main(void)
//{
//	char ch=0;
//
//	ch = getchar();
//
//	putchar(ch);
//
//	putchar('Z');
//
//	return 0;
//}

// ex 3 : no header file, conio.h
//int main(void)
//{
//	char ch = 0;
//
//	printf("아무 키나 누르면 다음으로 넘어갑니다. \n");
//
//	ch = _getch();
//
//	printf("입력한키는 ");
//	putchar(ch);
//
//	return 0;
//}

// ex 4 get01.c
//int main(void)
//{
//	char szName[32] = {0};
////	char szName = {0};
//
//	printf("이름입력");
////	gets(szName);
////	gets_s(szName, sizeof(szName));
//	scanf("%s", szName);
//
//	printf("이름:") ;
//	puts(szName);
//
//	return 0;
//}
// last example
int main(void)
{
	char szName[32] = {0};
	int nAge = 0;

	printf("age : ");
	scanf("%d%*c", &nAge); // %*c means getting rid of 1 buffer.

	printf("name : ");

//	scanf("%s", szName);
	fgets(szName, sizeof(szName), stdin);
	printf("age : %d, name : %s \n", nAge, szName);

	return 0;

}


