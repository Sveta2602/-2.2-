#include "List.h"
#include <iostream>
#include <iomanip>
#include <cmath>

#include <sstream>
using namespace std;


List::List()
{
	Size = 0;
	head = nullptr;      //наш список пуст.
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
	head = n.head;      //наш список пуст.
}

void List::Pop_Front()
{
	Node *tmp = head;                ///тимчасовий вказівник  tmp буде зберігати адресу head(нуль-елементу нашого списку)
	head = head->pNext;    //в head присвоюємо вказівник на наступний елемент нашого списку
	delete tmp;   //видаляємо перший елемент списку
	Size--;             // зменшуємо кількість елементів списку на один.
}

void List::Push_Front(int data)
{
	head = new Node(data,head); //вказівнику присвоїли новий елемент

	Size++;               //кількість елементів збільшили на один.
}

void List::Insert(int data, int index)
{
	if (index == 0)
	{
		Push_Front(data);
    }
	else                                // у тимчасовий вказивник присвоюємо вказиник на наступний
		                                     //елемент нашого списку.
	{
		Node* previous =this-> head;                                 //  previous- попередній
		for (int i = 0; i < index-1; i++)                  // шукаємо елемент з індексом попереднього елементу
		{
			previous = previous->pNext;                //previous отримує адрес попереднього елементу
		}
		Node* newNode = new Node(data, previous->pNext);
			previous->pNext = newNode;              //адрес попереднього елементу присваюємо нашому елементу ,який ми вставляємо
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

void List::Clear()    //метод очищення списку
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
		head = new Node(data);// cтворюємо новий елемент Node i передаємо йому нащі данні.
	}
	else
	{
		
		Node* current = this->head;     //присвоюємо значення нашого головного елементу змінній Сurrent.
		while (current->pNext!=nullptr)    // цикл працює доки вказівник не стане =0.
		{
			current = current->pNext;      ///присвоюємо в полі с вказівник на наступний елемент.
		}
		current->pNext = new Node(data);              //створюємо новий елемент Node i адрес цього елементу присвоюэмо замість nullptr 


	}
	Size++;
}

int List::operator[](  int index)      //перегрузка оператора[]
{
	int count = 0;                              /// рахуємо де ми знаходимся в якому елементі.
	Node* current = this->head; 
	while (current!=nullptr)
	{
	
		if (count ==index )                     // отже ми знайшли необхідний елемент
		{
			return current->data;     //повертаємо данні ,які знаходяться в елементі під цим індексом.
		}
		current = current->pNext;       // елементу присвоюємо вказівник на адрес наступного елемента.
		count++;      // номер  елемента в якому ми знаходимся збільшуємо на один.

	}                                     // доки наша current не буде вказувати на nullptr .ми будемо шукати необхідний обєкт.(current!=nullptr)


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

