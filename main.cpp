#include "List.h"
#include<iostream>



using namespace std;

int main()
{
	
	setlocale(LC_ALL, "ru");
	List lst, lst1;
	
	lst1.Push_back(9);
	lst1.Push_back(4);
	lst1.Push_back(9);
	lst.Push_back(4);
	lst.Push_back(2);
	for (int i = 0; i < lst1.Get_Size(); i++)
	{
		cout << lst1[i] << endl;
	}
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
		if (lst[i] == lst1[i] &&lst.Get_Size()==lst1.Get_Size())
			cout << "  ������ �����" << endl;
		else
			cout << " ������ �� �����" << endl;
		if (lst[i] == lst1[i] && lst.Get_Size() > lst1.Get_Size())
			cout << "  ������ lst ������� �� lst1 �� ��������� ���������" << endl;
		else
			cout << "  ������ lst ������  �� lst1 �� ��������� ���������" << endl;
	}
	
	
	

		
	
	
	cout << "====================================================================================";
	cout << " ��������� ������ Push_Back(������� ��������)" << endl;

	lst.Push_back(9);
	lst.Push_back(4);
	lst.Push_back(6);
	lst.Push_back(12);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "====================================================================================" ;
	cout << " ��������� ������ Push_Front(������� ������)" << endl;
	lst.Push_Front(5);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "====================================================================================";
	cout << "  ��������� ������ Pop_Front(  ��������� ������� ��������)";
	cout <<endl<< "��������� ��������� �  ������  " << lst.Get_Size() << endl << "  ��������� ������ Pop_Front" << endl;
	lst.Pop_Front();
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	
	cout << endl << " ��������� ��������� � ������ " << lst.Get_Size() << endl;
	cout << "====================================================================================";
	
	
	cout << endl << "��������� ������� (Insert) �������� �� ������� " << endl;
	lst.Insert(67, 1);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << endl << "��������� � ������ " << lst.Get_Size() << endl;

	cout << "====================================================================================";
	cout << "        ��������� ������ RemoveAt (��������� �������� �� �������� �������)"<<endl;
	lst.RemoveAt(3);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << endl << "��������� � ������ " << lst.Get_Size() << endl;
	cout << "====================================================================================";
	cout << endl << " ��������� ������ Clear" << endl;
	lst.Clear();
	cout << endl << "��������� � ������ " << lst.Get_Size() << endl;
	return 0;
}