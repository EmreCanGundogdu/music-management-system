#include <iostream>
#include <string>
#include "music.h"
#include "date.h"
using namespace std;

int main(){

 music m1("Fikrimin Ince Gulu",1,10,25,"Zeki Muren");
 music mu2("Neredesin Sen",2,5,100,"Neset Ertas");
 music mu3("Mihriban",3,6,68,"Musa Eroglu");
 music m4("Hep Yasin 19",4,15,10,"MFÖ");
 music m5("Inleyen Nagmeler",5,1,500,"Zeki Muren");

m1+=3;
    cout<<m1<<endl;

m1-=2;
    cout<<m1;





return 0;
}
