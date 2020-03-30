#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#define Max 10

using namespace std;
struct STACK
{
int data[Max];
int atas;
}tumpukan;

void PUSH (char x){
 if(tumpukan.atas== Max) {
        cout<<"Tumpukan Penuh";
 getch();
 }
 else{
    tumpukan.atas++;
    tumpukan.data[tumpukan.atas]=x;
}
}

char POP(){
char hasil;
if (tumpukan.atas==0){
    cout<<"Tumpukan Kosong";
    hasil = ' ';
}
else{
    hasil=tumpukan.data[tumpukan.atas];
    tumpukan.atas=tumpukan.atas -1;
}
return hasil;
}

int main ()
{
    int jumlah;
    int belakang,i;
    char Kata[Max];
    bool palindrome=true;
tumpukan.atas=0;
cout<<"ketikkan Kata:";
cin.getline(Kata,sizeof(Kata));
cout<<"Kata Asli/awal:"<<Kata;

jumlah=strlen(Kata);
belakang =jumlah-1;
cout<<"\nJumlah Huruf yang diketik :"<<jumlah<<endl;

for(i=0;i<strlen(Kata);i++)
{
     PUSH(Kata[i]);
      }

      cout<<"Kata Setelah di Balik : ";

      for (i=0;i<strlen(Kata);i++)
      {
       cout<<""<<POP();
}
for(int a=0; a<=tumpukan.atas; a++)
{
    if((char)tolower(Kata[a])!=(char)tolower(Kata[belakang]))
            palindrome=false;
    break;
}
if(palindrome)
    cout<<"\nPalindrome";
else
    cout<<"\nBukan palindrome";
return 0;
getch ();
}