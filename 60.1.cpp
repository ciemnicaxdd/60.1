#include <iostream>
#include <fstream>

using namespace std;


class pliki{
public:
 fstream plik1;
 ofstream plik2;


pliki();
~pliki();


  void zadaniowy(){

          plik2 << "mniejsze od 1000: ";

          int tablica[200];
          int licznik=0;

for (int i=0; i<200; i++){

 plik1 >> tablica[i];

 if (tablica[i]<1000) licznik++;


}

plik2 << licznik << endl;




        plik2 << "ostatnie dwie: ";
        plik2 << tablica[199] << " ";

        int number=198;

    while (tablica[number]==tablica[199]){

                number--;

     if (number<0)
                break;
}


if (number>0){
    plik2 << tablica[number] << endl;

}

  }

};

pliki::pliki(){
plik1.open("liczby.txt");
   plik2.open("wyniki.txt");


}

pliki::~pliki(){

  plik2.close();


}

int main(){

pliki t1;
t1.zadaniowy();

  return 0;

}
