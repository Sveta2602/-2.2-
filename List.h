#pragma once


class List
{
public:
	List();
	List(int count, int value);
	
	List(const List& n);
	void Pop_Front();
	void Push_Front(int data);  // ���� ������� �� ������� ������.
	void Insert(int data, int index);// ����� ������� �������� � ������� �� ������ =������
	void RemoveAt(int index); //������� ���������� �������
	~List();
	void Clear();
	void Push_back(int data);   //  �����:  ���� ������� � ����� ������.
	int Get_Size() { return Size; };
	  int operator[](const int index);
	  bool  operator==( List& right);
	   bool Next(int data);      // ������� � ���������� ����
	  
private:
	

	
	class Node
	{
	public:
		Node *pNext;
		int data; 
		friend class List;
		Node(int data=int(), Node* pNext = nullptr)
		{
			this->data = data;    //data-    ����,�� ������������ � ��� ������
			this->pNext = pNext;///pNext - �������� �� ��������� ������� ������
		

		}
		
		
	};
	
	int Size;            //������� �������� ,�� ����������� � ������ ������.
	Node* head;       //�������� �� "������"-������ ������� ������.


};

