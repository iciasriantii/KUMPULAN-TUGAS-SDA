#include <iostream>
#define MAX_SIZE 5

using namespace std;

int queue[MAX_SIZE];
int front = -1, rear = -1;

bool Kosong()
{
    return front == -1 && rear == -1;
}

bool Penuh()
{
    return (rear == MAX_SIZE - 1 && front == 0) || (rear == front - 1);
}

void enqueue()
{
    if (Penuh())
    {
        cout << "Queue sudah penuh" << endl;
    }
    else if (Kosong())
    {
        front++;
        rear++;
        queue[rear] = rear + 1;
        cout << "Elemen berhasil ditambahkan ke dalam queue" << endl;
    }
    else
    {
        rear++;
        queue[rear] = rear + 1;
        cout << "Elemen berhasil ditambahkan ke dalam queue" << endl;
    }
}

void dequeue()
{
    if (Kosong())
    {
        cout << "Queue kosong" << endl;
    }
    else if (front == rear)
    {
        cout << "Elemen " << queue[front] << " berhasil dihapus dari queue" << endl;
        front = rear = -1;
    }
    else
    {
        cout << "Elemen " << queue[front] << " berhasil dihapus dari queue" << endl;
        front++;
    }
}

int main()
{
    int menu;

    do 
    {
        cout << "Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Cek kondisi queue" << endl;

        cout << "Pilih menu: ";
        cin >> menu;

        switch (menu)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                if (Kosong())
                {
                    cout << "Queue kosong" << endl;
                }
                else if (Penuh())
                {
                    cout << "Queue penuh dengan " << MAX_SIZE << " elemen" << endl;
                }
                else
                {
                    cout << "Jumlah elemen pada queue: " << rear - front + 1 << endl;
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
