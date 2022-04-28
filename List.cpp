#include "List.h"
#include <iostream>
#include <iomanip>
#include <cmath>

#include <sstream>
using namespace std;


List::List()
{
	Size = 0;
	head = nullptr;      //��� ������ ����.
}

List::List(int count,int value)
{
	Size = count;
	*head = value;      

}

List::~List()
{
	
}
List::List(const List& n)
{
	Size = n.Size;
	head = n.head;      //��� ������ ����.
}

void List::Pop_Front()
{
	Node *tmp = head;                ///���������� ��������  tmp ���� �������� ������ head(����-�������� ������ ������)
	head = head->pNext;    //� head ���������� �������� �� ��������� ������� ������ ������
	delete tmp;   //��������� ������ ������� ������
	Size--;             // �������� ������� �������� ������ �� ����.
}

void List::Push_Front(int data)
{
	head = new Node(data,head); //��������� �������� ����� �������

	Size++;               //������� �������� �������� �� ����.
}

void List::Insert(int data, int index)
{
	if (index == 0)
	{
		Push_Front(data);
    }
	else                                // � ���������� ��������� ���������� �������� �� ���������
		                                     //������� ������ ������.
	{
		Node* previous =this-> head;                                 //  previous- ���������
		for (int i = 0; i < index-1; i++)                  // ������ ������� � �������� ������������ ��������
		{
			previous = previous->pNext;                //previous ������ ����� ������������ ��������
		}
		Node* newNode = new Node(data, previous->pNext);
			previous->pNext = newNode;              //����� ������������ �������� ���������� ������ �������� ,���� �� ����������
		Size++;
 	}


}

void List::RemoveAt(int index)
{
	if (index == 0)
	{
		Pop_Front();
	}
	else
	{
		Node* previous = this->head;
		for (int i = 0; i < index - 1; i++) 
		{
			previous = previous->pNext;
		}
		Node*toDelete= previous->pNext;
		previous->pNext = toDelete->pNext;
		Size--;
	}



}

void List::Clear()    //����� �������� ������
{
	while (Size)
	{
		Pop_Front();
	}
}

void List::Push_back(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);// c�������� ����� ������� Node i �������� ���� ���� ����.
	}
	else
	{
		
		Node* current = this->head;     //���������� �������� ������ ��������� �������� ����� �urrent.
		while (current->pNext!=nullptr)    // ���� ������ ���� �������� �� ����� =0.
		{
			current = current->pNext;      ///���������� � ��� � �������� �� ��������� �������.
		}
		current->pNext = new Node(data);              //��������� ����� ������� Node i ����� ����� �������� ���������� ������ nullptr 


	}
	Size++;
}

int List::operator[](  int index)      //���������� ���������[]
{
	int count = 0;                              /// ������ �� �� ���������� � ����� �������.
	Node* current = this->head; 
	while (current!=nullptr)
	{
	
		if (count ==index )                     // ���� �� ������� ���������� �������
		{
			return current->data;     //��������� ���� ,�� ����������� � ������� �� ��� ��������.
		}
		current = current->pNext;       // �������� ���������� �������� �� ����� ���������� ��������.
		count++;      // �����  �������� � ����� �� ���������� �������� �� ����.

	}                                     // ���� ���� current �� ���� ��������� �� nullptr .�� ������ ������ ���������� ����.(current!=nullptr)


}

bool List::operator==( List & right)
{
	if (Get_Size() == right.Get_Size()&& head==right.head)
		

	return true;

}

 bool List::Next(int data)
{
	Node* current = this->head;
	if (head == nullptr) return NULL;
	return current->pNext;
}

