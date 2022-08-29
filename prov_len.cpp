#include "str.h"

int List::provlen(fstream& f, fstream& f1, char ogran, char ogran1, int num)
{
	char c; //для посимвольного ввода
	char c1 = '0';
	unsigned i = 0;
	unsigned i1 = 0;
	bool same = false;;
	while (f.eof() == 0 || f1.eof() == 0) 
	{
		f >> c;
		if (c == ogran)
		{
			f1 << c1;
			if (c1 == ogran1)
			{
				f >> c;
				f1 << c1;
				while ((c != ogran || c1 != ogran) && (c != '\n') && (f.eof() == 0 || f1.eof() == 0) && i < 55) {
					stroka[i] = c;
					stroka1[i1] = c1;
					if (stroka[i] != stroka1[i1])
					{
						same = false;
						break;
					}
					else
					{
						same = true;
						f.unsetf(ios::skipws);
						f >> c;
						i++;
						if (i > N)
							break;
						f.setf(ios::skipws);
					}
				}
				len = i;
				len1 = i1;
				if (same == true)
				{
					num = 1;
					break;
				}
				else
				{
					num = 0;
					break;
				}
			}
			else 
				continue;
		}
		else
			continue;
	}
	return num;
}