//stack = sebuah list yang hanya bisa ditambahkan dan dihapus pada elemen paling atas atau akhir

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>

using namespace std;

//deklarasi variabel
      int top=-1; //counter divider membantu tau ada tidaknya isi stack
      string stack[6]; //definisikan alokasi max stacknya 7 karena array dari 0
      string x; //variabel penampung input string untuk di isi

//definisi fungsi-fungsinya
      //fungsi push
            void push()
            {
                  if(top>=6)
                  {
                        cout << "Stack Penuh" << endl;
                        getch();
                        return;
                  }
                  else{
                        cout << "Masukkan satu kata : ";
                        cin >> x;

                        top++;
                        stack[top] = x;
                  }
            }

      //fungsi pop
            void pop()
            {
                  if(top<0)
                  {
                        cout << "Stack kosong";
                        system("PAUSE");
                        return;
                  }

                  cout << "before : " << endl;
                  int i=0;
                  for (i=top; i>=0; i--)
                  {
                        cout << stack[i] << "->" << i+1 << endl;
                  }

                  x=stack[top];
                  top--;
                  if(top<0)
                  {
                        cout << "after:" << endl;
                  }
                  else{
                        cout << "after:" << endl;

                  for (i=top; i>=0;i--)
                  {
                        cout << stack[i] << "->" << i+1 << endl;
                  }
            

            cout << "Karakter yang di POP adalah : " << endl;
            cout << "Banyak tumpukan sekarang : " << top+1 << endl;

            system("PAUSE");
            }

            void cetak()
            {
                  if(top=0)
                  {
                        cout << "Stack kosong" << endl;
                        system("PAUSE");
                        return;
                  }
                  int i=0;
                  cout << "Inilah tumpukan yang anda buat : ";
                  for(i=top;i>=0;i--)
                  {
                        cout << stack[i] << "->" << i+1 << endl;
                  }
                  cout << "Banyak tumpukan -> " << top+1 << endl;
                  system("PAUSE");
            }

      //Fungsi keluar dari program
            int keluar()
            {
                  cout << "Terimakasih sudah bermain" << endl;
                  exit(0);
            }

      //Fungsi utama
            int main(int argc, char *argv[])
            {
                  system("COLOR B");

                  int pilihan;
                  do
                  {
                        switch(pilihan)
                        {
                              case 1:push();
                              break;
                              case 2:pop();
                              break;
                              case 3:cetak();
                              break;
                              case 4:keluar();
                              break;
                              default:
                                    cout << "input yang anda masukkan salah" << endl;
                                    cout << "coba lagi" << endl;
                                    getch();
                        }
                  }
                  while(pilihan !=1 || pilihan !=2 || pilihan !=3 || pilihan !=4)

            }
