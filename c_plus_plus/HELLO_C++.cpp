/*
範例檔名：Hello_c++.cpp
程式開發：郭尚君
*/
#include <iostream>
#include <cstdlib> //在std名稱空間內載入C語言的stdlib.h

using namespace std; //使用std名稱空間

class Printer  //宣告Printer類別
{
private: 
	int Serial_Number;  //宣告Printer類別的屬性
public:
	void Hello()  //宣告Printer類別的方法
	{
        char name[10];
        cout << "Please input your name :" << endl;
        cin >> name;
	    cout << "Hello C++ ! " << endl;  //印出Hello C++ !
        cout << "I am " << name << " ." << endl;
        //輸出從螢幕讀取的資料
	}
};    //完成Printer類別的宣告

int main()
{
	Printer My_Printer;  //依據Printer類別建立My_Printer物件

	My_Printer.Hello();  //呼叫My_Printer物件的方法

    system("PAUSE");
    return 0;
} //主程式結束
