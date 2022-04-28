#pragma once


class List
{
public:
	List();
	List(int count, int value);
	
	List(const List& n);
	void Pop_Front();
	void Push_Front(int data);  // додає елемент на початок списку.
	void Insert(int data, int index);// метод вставки елементу з данними по адресу =індекс
	void RemoveAt(int index); //видаляє зазначений елемент
	~List();
	void Clear();
	void Push_back(int data);   //  метод:  додає елемент в кінець списку.
	int Get_Size() { return Size; };
	  int operator[](const int index);
	  bool  operator==( List& right);
	   bool Next(int data);      // Переход к следующему узлу
	  
private:
	

	
	class Node
	{
	public:
		Node *pNext;
		int data; 
		friend class List;
		Node(int data=int(), Node* pNext = nullptr)
		{
			this->data = data;    //data-    данні,які зберигаються в узлі списка
			this->pNext = pNext;///pNext - вказівник на наступний елемент списку
		

		}
		
		
	};
	
	int Size;            //кількість елементів ,які зберігаються в нашому списку.
	Node* head;       //вказівник на "голову"-перший елемент списку.


};

