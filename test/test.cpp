// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"debug.h"

int main()
{
	unsigned char cc[3] = { 0x02,0x03,0x04 };
	for (int i = 0; i < 3; i++)
	{
		printf("%02x", cc[i]);

		printf("\n");
	}
	DEBUG1("%02x", cc[1]);
	DEBUG(cc, 3);
	return 1;

}

