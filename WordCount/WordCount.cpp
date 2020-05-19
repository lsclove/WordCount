// WordCount.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
#include<cassert>
#include<string>
using namespace std;
void CountChar(string FileName);
void CountWord(string FileName);

int main(int argc,char *argv[]) {
	string FileName;         
	if ((string)argv[1] == "-c")
		CountChar((string)argv[2]);
		
	if ((string)argv[1] == "-w")
		CountWord((string)argv[2]);
	return 0;
}
void CountChar(string FileName) {
	int sum = -1;
	char data;
	string File = "F:/Teanching Assistant/Git Test/WordCount/" + FileName;
	ifstream file;
	file.open(File.data());
	assert(file.is_open());
	while (!file.eof()) {
		file >> data;
		sum++;
		
	}
			file.close();
	cout << "char count:" << sum << endl;
	return;
}
void CountWord(string FileName) {
	int sum = 1;
	char data;
	string File = "F:/Teanching Assistant/Git Test/WordCount/" + FileName;
	ifstream file;
	file.open(File.data());
	assert(file.is_open());
	while (!file.eof()) {
		file >> data;
		if (data == ' ' || data == ','||data=='\n')
			sum++;
	}
	file.close();
	cout << "wrod count:" << sum << endl;
	return;
}

