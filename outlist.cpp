#include "el.h"

void out(El* head, fstream& f)
{
	int i = 0;
	if (head)
	{
		f << i << '.';
		head->str.outstr(f);
		El* cur = head->next;
		i += 1;
		f << "->";
		cur = cur->next;
		while (cur != NULL)
		{
			f << i << '.';
			cur->str.outstr(f);
			cur = cur->next;
			i++;
			f << "->";
		}
		f << "NULL" << endl;
	}
	else
		f << "Пустой список" << endl;
}