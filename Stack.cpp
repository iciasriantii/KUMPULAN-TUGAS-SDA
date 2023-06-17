#include <iostream>
#define MAX_SIZE 5

using namespace std;

int stack[MAX_SIZE];
int top = -1;

bool Kosong()
{
    return top == -1;
}

bool Penuh()
{
    return top == MAX_SIZE - 1;
}

void push()
{
    if (Penuh())
	{
        cout << "Stack sudah penuh" << endl;
    }
	else
	{
        top++;
        stack[top] = top + 1;
        cout << "Elemen berhasil ditambahkan ke dalam stack" << endl;
    }
}

void pop()
{
    if (Kosong())
	{
        cout << "Stack kosong" << endl;
    }
	else
	{
        cout << "Elemen berhasil dihapus dari stack" << endl;
        top--;
    }
}

int main()
{
    int menu;

    do 
	{
        cout << "Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Cek kondisi stack" << endl;

        cout << "Pilih menu: ";
        cin >> menu;

        switch (menu)
		{
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                if (Kosong())
				{
                    cout << "Stack kosong" << endl;
                }
				else if (Penuh())
				{
                    cout << "Stack penuh dengan " << MAX_SIZE << " elemen" << endl;
                }
				else
				{
                    cout << "Jumlah elemen pada stack: " << top + 1 << endl;
                }
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }

        cout << endl;

    } while (menu != 0);

    return 0;
}
