#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

main()
{
char kata [100];

 cout<<"Nama : ";
gets(kata);

strupr(kata); //mengubah huruh kecil menjadi huruf besar

cout << endl;

 cout<<"Hasil: "<<kata;
return 0;

}
