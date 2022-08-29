#include "el.h"
#include <iostream>

El* obr(El* head, El* head1, El* head2, fstream& f, fstream& f1, fstream& f2)
{
	int num = 0;
	int i = 0;
	if (head)  //������
	{
		head->str.outstr(f);
		El* cur = head->next;
		i += 1;
		cur = cur->next;
		while (cur != nullptr)
		{
			cur->str.outstr(f);
			cur = cur->next;
			i++;
		}
	}
	else
	{
		i = 0;
		cout << "No list";
		return head;
	}
	cout << "Size of list: " << i << "\n";
	int nomer = 0;
	char ogran = '0';
	char ogran1 = '0';
	f >> ogran;
	f1 >> ogran1;
	List sstr{};
//	int num = 0;
	sstr.inpstr(f, ogran);  //���������� �������� ����� �������� ����������� �������
	inpList(head, sstr);
	int n = sstr.provlen(f, f1, ogran, ogran1, num);
	if (n == 0)
		nomer++;
	El* cur = new El;
	head->next = cur;
	cur->str = sstr;

	while (1)
	{
		sstr.inpstr(f, ogran);
		int n = sstr.provlen(f, f1, ogran, ogran1, num);
		if (n == 0 && nomer == 0)
			nomer++;
		if (f.eof())
			break;
		cur->next = new El;
		cur = cur->next;
		cur->str = sstr;
	}
	cur->next = NULL;
	if (nomer > 0)  //�������
	{
		while (nomer > 0)
		{
			cur = cur->next;
			nomer--;
		}
		El* tmp = new El;
		tmp->inf = head2;
		tmp->next = cur->next;
		cur->next = tmp;
	}
	else
		return head;

	/*
		El* add_symbol = head->next;
		int k = 2;
		El* cur = head;
		while (k != 0)
		{
			cur = head->next;
			k--;
		}
		while (i != 0)
		{
			if (cur == searched_symbol)
			{
				num = i;
				break;
			}
			else
			{
				//cur->next = new El;
				cur = cur->next;
			}
			i--;
		}
		cout << "After this number: " << num << "\n";
		if (num != 0)
		{
			El* tmp = new El;
			tmp->inf = add_symbol;
			tmp->next = cur->next;
			cur->next = tmp;
		}
		else
			cout << "No searched symbol" << "\n";*/
	return head;
}

