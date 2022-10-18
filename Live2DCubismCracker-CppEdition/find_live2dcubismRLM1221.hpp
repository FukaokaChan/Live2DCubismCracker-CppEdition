#pragma once
#include <boost/filesystem.hpp>
#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;
wchar_t* t_path = (wchar_t*)L"C:\\Program Files\\Live2D Cubism 4.1\\app\\lib\\rlm1221.jar";
wchar_t* x_path = (wchar_t*)L"C:\\Program Files\\Live2D Cubism 4.1\\app\\lib\\rlm1221.jar";
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
		HRESULT result = CopyFile2(t_path, x_path, 0);
		file.read((char *)"rlm1221.jar", 0);
		cout << "File Readed in Address: 0x" << file.hex << endl;
		if (result == 0) {
			cout << "Error: File not Founded or Program not launched as Admin"
		}
		else {
			cout << "Copied Successfully!!!" << endl;
			Sleep(15000);
			exit(444);
		}
	}
}
