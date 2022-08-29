#include "el.h"

void inp(El* head, fstream& f)
{
	char ogran = '0';
	f >> ogran;
	List sstr;
	sstr.inpstr(f, ogran);
	inpList(head, sstr);
	El* cur = new El;
	//sstr.inpstr(f, ogran);
	head->next = cur;
	cur->str = sstr;
	while (true)
	{
		sstr.inpstr(f, ogran);
		if (f.eof())
			break;
		cur->next = new El;
		cur = cur->next;
		cur->str = sstr;
	}
	cur->next = nullptr;
}