#include "str.h"

void List::outstr(fstream& f)
{
	if (len == 0)
		f << "No elem";
	else
	{
		for (int i = 0; i < len; i++)
		{
			f << stroka[i];
		}
	}
	f << '\n';
}