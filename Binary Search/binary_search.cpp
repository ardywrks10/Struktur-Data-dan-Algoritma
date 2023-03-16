#include <iostream>
using namespace std;

int search(int low, int high, int arr[], int x)
{
	while (low <= high)
	{
		int mid = low + (high - low)/2;
		
		if (arr[mid] == x)
		{
			return mid;
		
		}else if (arr[mid] > x)
		{
			high = mid - 1;
		
		}else if (arr[mid] < x)
		{
			low = mid + 1;
		}
	}
	
	return -1;
}

int main ()
{
	int n, arr[100], x;
	cout << "- Input jumlah elemen : ";
	cin  >> n;
	
	
	cout << "- Input " << n << " elemen      : ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	
	cout << "- Input elemen tujuan : " ;
	cin  >> x;
	int hasil = search(0, n - 1, arr, x);
	
	if (hasil == -1)
	{
		cout << endl << "~ Elemen tidak ditemukan" << endl;
	
	}else{
		
		cout << endl << "~ Elemen berada pada indeks ke : " << hasil << endl;
	}
}