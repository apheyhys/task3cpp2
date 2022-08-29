#include "str.h"

void List::inp_podstr(fstream& f1, char ogran1) {
	char c1;
	unsigned i1 = 0;
	while (f1.eof() == 0) {
		f1 >> c1;
		if (c1 == ogran1) {
			f1 >> c1;
			while (c1 != ogran1 && c1 != '\n' && f1.eof() == 0 && i1 < 55) {
				stroka1[i1] = c1;
				f1.unsetf(ios::skipws);
				f1 >> c1;
				i1++;
				if (i1 > N)
					break;
				f1.setf(ios::skipws);
			}
			len1 = i1;
			break;
		}
		else
			continue;
	}
}