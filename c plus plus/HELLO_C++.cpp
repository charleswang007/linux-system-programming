/*
�d���ɦW�GHello_c++.cpp
�{���}�o�G���|�g
*/
#include <iostream>
#include <cstdlib> //�bstd�W�٪Ŷ������JC�y����stdlib.h

using namespace std; //�ϥ�std�W�٪Ŷ�

class Printer  //�ŧiPrinter���O
{
private: 
	int Serial_Number;  //�ŧiPrinter���O���ݩ�
public:
	void Hello()  //�ŧiPrinter���O����k
	{
        char name[10];
        cout << "Please input your name :" << endl;
        cin >> name;
	    cout << "Hello C++ ! " << endl;  //�L�XHello C++ !
        cout << "I am " << name << " ." << endl;
        //��X�q�ù�Ū�������
	}
};    //����Printer���O���ŧi

int main()
{
	Printer My_Printer;  //�̾�Printer���O�إ�My_Printer����

	My_Printer.Hello();  //�I�sMy_Printer���󪺤�k

    system("PAUSE");
    return 0;
} //�D�{������
