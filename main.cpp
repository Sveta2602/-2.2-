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
			cout << "  списки ривни" << endl;
		else
			cout << " списки не ривни" << endl;
		if (lst[i] == lst1[i] && lst.Get_Size() > lst1.Get_Size())
			cout << "  список lst бильший за lst1 за килькистю елементив" << endl;
		else
			cout << "  список lst менший  за lst1 за килькистю елементив" << endl;
	}
	
	
	

		
	
	
	cout << "====================================================================================";
	cout << " Виконання методу Push_Back(вставка останним)" << endl;

	lst.Push_back(9);
	lst.Push_back(4);
	lst.Push_back(6);
	lst.Push_back(12);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "====================================================================================" ;
	cout << " Виконання методу Push_Front(вставка першим)" << endl;
	lst.Push_Front(5);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "====================================================================================";
	cout << "  Виконання метода Pop_Front(  видалення першого елементу)";
	cout <<endl<< "Килькисть Елементив в  списку  " << lst.Get_Size() << endl << "  Виконання метода Pop_Front" << endl;
	lst.Pop_Front();
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	
	cout << endl << " Килькисть Елементив в списку " << lst.Get_Size() << endl;
	cout << "====================================================================================";
	
	
	cout << endl << "виконання вставки (Insert) елементу по индексу " << endl;
	lst.Insert(67, 1);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << endl << "Елементив в списку " << lst.Get_Size() << endl;

	cout << "====================================================================================";
	cout << "        виконання методу RemoveAt (видалення елементу по заданому индексу)"<<endl;
	lst.RemoveAt(3);
	for (int i = 0; i < lst.Get_Size(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << endl << "Елементив в списку " << lst.Get_Size() << endl;
	cout << "====================================================================================";
	cout << endl << " виконання метода Clear" << endl;
	lst.Clear();
	cout << endl << "Елементив в списку " << lst.Get_Size() << endl;
	return 0;
}