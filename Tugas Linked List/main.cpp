#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Linkedlist.h"
using namespace std;


int main(int argc, char** argv) {
	
	LinkedList list1;
	int input, item;
	
	int pilih;
	do{
		
		cout << "===== PROGRAM LINKED LIST C++ =====" << endl;
		cout << "1. Insert to Head"      << endl;
		cout << "2. Insert After Value"  << endl;
		cout << "3. Insert to Tail"      << endl;
		cout << "4. Delete from Head"    << endl;
		cout << "5. Delete by Value"     << endl;
		cout << "6. Delete from Tail"    << endl;
		cout << "7. Print Linked List"   << endl;
		cout << "8. Keluar" << endl;
		cout << "Masukan pilihan : ";
		cin  >> pilih;
		
		ulang :	
		switch (pilih)
		{
			case 1:
				cout << ">> Input item   : ";
				cin  >> input;
				list1.insertToHead(input);
				getch();
				break;
				
			case 2:
				cout << ">> Input item : ";
				cin  >> input;
				cout << ">> Input value: ";
				cin  >> item; 
				list1.insertAfter(item, input);
				getch();
				break;
				
			case 3:
				cout << ">> Input item   : ";
				cin  >> input;
				list1.insertToTail(input);
				getch();
				break;
				
			case 4:
				list1.deleteFromHead();
				getch();
				break;
				
			case 5:
				cout << ">> Input item   : ";
				cin  >> input;
				list1.deleteByValue(input);
				getch();
				break;
				
			case 6:
				list1.deleteFromTail();
				getch();
				break;
				
			case 7:
				list1.printAll();
				getch();
				break;
				
			case 8:
				cout << ">> Terimakasih";
				getch();
				break;
				
			default:
				cout << "Pilihan tidak tersedia/pilihan yang anda input salah" << endl;
				getch();
				break;
				goto ulang;
		}
		system ("cls");
		
	}while (pilih != 8);
	
	return 0;
}
