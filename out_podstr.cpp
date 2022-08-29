#include "el.h"

void out_podstr(El* head, fstream& f)
{
	int i = 0;
	if (head)
	{
		f << i << '.';
		head->str.outstr(f);
		f << "->";
		f << "NULL" << endl;
	}
	else
		f << "Пустой список" << endl;
}