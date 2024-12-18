#include <iostream>
#include <conio.h>
using namespace std;

void dMenu(); // Function declarations
void mInputData();
void mTampilkanData();
void sortingAsc();
void sortingDsc();
void tukar(int *a, int *b);

int n; // Global variable to store number of elements
int myData[100];

void dMenu()
{
  system("cls");
  cout << "Aplikasi Tampilan Menu" << "\n";
  cout << "1. Menu Pertama" << "\n";
  cout << "2. Menu Kedua" << "\n";
  cout << "3. Menu Ketiga" << "\n";
  cout << "4. Menu Keempat" << "\n";
  cout << "5. Exit" << "\n";
  cout << "Masukan angka :";
}

void mPertama(string pesan)
{
  system("cls");
  cout << "hallo saya menu " << pesan;
  getch();
}

void mTampilkanData()
{
  system("cls");
  cout << "Data yang dimasukkan: ";
  for (int i = 0; i < n; i++)
  {
    cout << myData[i] << " ";
  }
  cout << "\n";
  getch();
}

void sortingAsc()
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (myData[j] > myData[j + 1])
      {
        tukar(&myData[j], &myData[j + 1]);
      }
    }
  }
  cout << "Data telah diurutkan dalam urutan menaik.\n";
  getch();
}



void sortingDsc() {  
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) {  
            if (myData[j] < myData[j + 1]) {  
                tukar(&myData[j], &myData[j + 1]);  
            }  
        }  
    }  
    cout << "Data telah diurutkan dalam urutan menurun.\n";  
    getch();  
}  

int main()
{
  char pl;
  do
  {
    dMenu();
    pl = getch();
    switch (pl)
    {
    case '1':
      /* code */
      mPertama("pertama");
      break;
    case '2':
      mPertama("ke- dua");
      /* code */
      break;
    case '3':
      mPertama("ke- tiga");
      /* code */
      break;
    case '4':
      mPertama("ke- empat");
      /* code */
      break;
    case '5':
      /* code */
      break;

    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia";
      getch();
      break;
    }

  } while (pl != '5');
  return 0;
}