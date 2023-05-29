#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "BinaryTree.h"

using namespace std;


int main(int argc, char** argv) {
	
	BinaryTree bin;
	int insertVal;
	int pilih;
	
	do{
		
		cout << "===== PROGRAM BINARY TREE C++ =====" << endl;
		cout << " 1. Insert Node                    " << endl;
		cout << " 2. Search Node                    " << endl;
		cout << " 3. Exit                           " << endl;
		cout << "===================================" << endl;
		cout << "Masukan pilihan    : ";
		cin  >> pilih;
		
		ulang :	
		switch (pilih)
		{
			case 1:
				cout << "Masukan nilai dari node : ";
				cin  >> insertVal;
				bin.insertNode(insertVal);
				cout << endl;
			
				bin.findMin();
				bin.findMax();
				cout << endl;
			
				cout << "Pre-Order Traversal   : ";
				bin.PreOrder();
				cout << endl;
				cout << "In-Order Traversal    : ";
				bin.InOrder();
				cout << endl;
				cout << "Post-Order Traversal  : ";
				bin.PostOrder();
				
				getch();
				break;
				
			case 2:
				cout << "Masukan nilai dari node : ";
				cin  >> insertVal;
				bin.searchNode(insertVal);
				getch();
				break;
								
			case 3:
				cout << "Terimakasih";
				getch();
				break;
				
			default:
				cout << "Pilihan tidak tersedia atau format pilihan salah" << endl;
				getch();
				break;
				goto ulang;
		}
		system ("cls");
		
	}while (pilih != 3);
	
	return 0;
}
