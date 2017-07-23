#include <iostream>
#include <math.h>#include <time.h>#include <stdlib.h>#include <fstream>#include <conio.h>
using namespace std;
int fourdigit_number;int number_generator(){    srand(time(NULL));    fourdigit_number=rand()%100;    return fourdigit_number;}void print_header(){    cout<<"*** Your LUCKY GOD ***\n";
    cout<<"                      \n";
    cout<<"---- 4D Generator ----\n";
    cout<<"                      \n";    cout<<"Your number is : ";}void print_number(){    cout<<fourdigit_number;}
int main()
{    Start:    print_header();    number_generator();    print_number();    cout<<endl<<endl<<endl;    cout<<"Press any key to get another lucky number! "<<endl<<endl<<endl;    getch();    system("CLS");    goto Start;    //ofstream myfile;
    //myfile.open("4d_counter.txt");    return 0;
}
