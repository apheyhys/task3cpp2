#pragma once
#include <fstream>

const unsigned N = 55;
using namespace::std;

struct List
{
	char stroka[N], stroka1[N];
	int len, len1;
	void inpstr(fstream& f, char ogran);
	void inp_podstr(fstream& f, char ogran);
	void outstr(fstream& f);
	int provlen(fstream& f, fstream& f1, char ogran, char ogran1, int num);
};