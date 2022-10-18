#pragma once
#include <boost/filesystem.hpp>
#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;
LPTSTR path = (LPTSTR)LocalAlloc(LMEM_FIXED, (MAX_PATH + 1) * sizeof(TCHAR));
TCHAR path_1[MAX_PATH + 1];

void FindFileLive2DCubismRLM1221() {
	SetConsoleTitleA("Live2D Cubism Cracker");
	fstream file;
	file.open("rlm1221.jar");
	if (!file) 
	{
		cout << "Error: File Not Opened or Not Founded..." << endl;
		Sleep(5000);
		exit(122);
	}
	else {
		file.read((char *)"rlm1221.jar", 0);
		cout << "File Readed in Address: 0x" << file.hex << endl;
		if (CopyFile2((PCWSTR)(wchar_t *)"rlm1221.jar", (PCWSTR)"C:\\Program Files\\Live2D Cubism 4.1\\app\\lib\\rlm1221.jar", 0)) {
			cout << "Copied Successfully!!!" << endl;
			Sleep(15000);
			exit(444);
		}
	}
}