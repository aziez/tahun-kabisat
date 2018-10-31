/* 
Tugas Menghitung tahun kabisat dengan c++
Nama : Muhamad Abdul Aziz
Nim   : 18101140004
Kelas : 01TPLE001
Ruang : 1001
*/




#include <iostream>
using namespace std;


int main() //permulaan mulai
{
    
   int tahun; //mendeklarasikan tahun sebagai nilai integer
   cout<<"\n masukkan Tahun :";
   cin>>tahun; //mengeluarkan input tahun 
   
   if ( (tahun%400==0 || tahun%100!=0) && (tahun%4==0)) //jika hasil input dibagi 400=0 atau hasil input dibagi 100 bukan 0 dan hasil input dibagi 4=0
       
       cout<<"|| tahun " <<tahun << " KABISAT || \n"; //maka bilanagan tersebut kabisat
       
       
       
       else 
           cout<<"|| tahun " <<tahun << " BUKAN KABISAT || \n"; //jika tidak maka bukan kabisat
           
           main(); //mengulangi semua script di atas
 
   
}