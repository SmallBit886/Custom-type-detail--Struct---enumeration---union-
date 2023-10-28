#define _CRT_SECURE_NO_WARNINGS 1
//自定义类型详解（结构体 + 枚举 + 联合）

#include <stdio.h>
#include <stddef.h>
//计算宏的偏移地址
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));//0
//	printf("%d\n", offsetof(struct S, a));//4
//	printf("%d\n", offsetof(struct S, c2));//8
//
//	return 0;
//}

//自己实现
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));//0
//	printf("%d\n", OFFSETOF(struct S, a));//4
//	printf("%d\n", OFFSETOF(struct S, c2));//8
//
//	return 0;
//}


//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucpim1;
//		unsigned char ucdate0 : 1;
//		unsigned char ucdate1 : 2;
//		unsigned char ucdate2 : 3;
//	}*pstPimDate;
//	pstPimDate = (struct tagPIM*)puc;
//	//00000000 00000000 00000000 00000000
//	memset(puc, 0, 4);
//	pstPimDate->ucpim1 = 2;//0000010
//	pstPimDate->ucdate0 = 3;//01 1
//	pstPimDate->ucdate1 = 4;//01 00
//	pstPimDate->ucdate2 = 5;//0  101
//	//00000010 00101001 00000000 00000000
//	//  0   2    2   9    0   0    0   0
//	//02 29 00 00
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//02 29 00 00
//
//	return 0;
//}


//union Un
//{
//	short s[7];//14
//	int n;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16	   为最大对齐数的整数倍
//	return 0;
//}


//int main()
//{
//	union S
//	{
//		short k;
//		char i[2];
//	}*s, S;
//
//	s = &S;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", s->k);//3839
//
//	return 0;
//}



//int main()
//{
//	enum S
//	{
//		X1,
//		Y1,
//		Z1 = 10,
//		A1,
//		B1,//12
//	};
//	enum S	 enumA = Y1;
//	enum S   enumB = B1;
//	printf("%d %d\n", enumA, enumB);//1  12
//	return 0;
//}


