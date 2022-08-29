#include "str.h"
#include <iostream>
using namespace std;


void List::inpstr(fstream& f, char ogran) {
	char c;
	int i = 0;

	while (f.eof() == 0) {
		f >> c;
		if (c == ogran) {
			f >> c;
            cout << c << endl;
			while (c != ogran && c != '\n') {
				stroka[i] = c;
                cout << c << endl;
                cout << stroka << endl;

//                cout << i << endl;
//                cout << c << endl;
				f.unsetf(ios::skipws);
				f >> c;
				i++;
				if (i > N)
					break;
				f.setf(ios::skipws);
			}
			len = i;
//            cout << "len " << i << endl;
			break;
		}
		else
			continue;
	}
}