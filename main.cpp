#include <iostream>
#include "el.h"
//#include "str.h"

using namespace std;

int main()
{
	fstream f, f1, f2, f3;
	f.open("/home/ubuntu/CLionProjects/task3cpp2/inp.txt", ios::in);

	El* head; // �������� ������
	head = new El;
	El* head1;  // ������� ������� ������
	El* head2;  // ������� ������� �����������
	inp(head, f); //�������� ������
	f1.open("/home/ubuntu/CLionProjects/task3cpp2/out.txt", ios::out);
	f1 << "��������� ������:" << '\n';
	out(head, f1);
	f1 << "\n";

	f2.open("/home/ubuntu/CLionProjects/task3cpp2/in.txt", ios::in);
	head1 = new El;
	inp(head1, f2);  // ������� ������� ������
	f1 << "��������� ���������:" << '\n';
	out_podstr(head1, f1);
	f1 << "\n";

	f3.open("/home/ubuntu/CLionProjects/task3cpp2/in1.txt", ios::in);
	head2 = new El;
	inp(head2, f3);  // ������� ������� �����������
	f1 << "��������� ������ ���������:" << '\n';
	out_podstr(head2, f1);
	f1 << "\n";

	head = obr(head, head1, head2, f, f2, f3);
	f1 << "���������:" << '\n';
	out(head, f1);
	f1 << "\n";

//	head = dltList(head);
//	f1 << "����� ��������:" << '\n';
//	out(head, f1);
//	f1 << "\n";
//
//	head1 = dltList(head1);
//	f1 << "���������1 ����� ��������:" << '\n';
//	out(head1, f1);
//	f1 << "\n";
//
//	head2 = dltList(head2);
//	f1 << "���������2 ����� ��������:" << '\n';
//	out(head2, f1);
	return 0;
}