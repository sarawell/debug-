#pragma once
#ifndef DEBUG
#define DEBUG(i,len)\
{\
	printf("调试信息:");\
	for (int j = 0; j < len; j++)\
	{\
		printf("%02x", i[j]);\
	}\
	printf("\n");\
}
#define DEBUG1(format, ...) printf("调试信息："),printf(format,##__VA_ARGS__),printf("\n")
#else
#define DEBUG(i,len)
#endif // !DEBUG
