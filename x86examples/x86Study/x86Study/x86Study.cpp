// x86Study.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int nEax = 0, nEbx = 0;
	__asm mov nEax, eax; // 
	printf("eax = %08X\r\n", nEax);
	__asm {
		mov nEbx, ebx;
	}
	printf("ebx = %08X\r\n", nEbx);
}
