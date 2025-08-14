#include<iostream>
#include<cstdio>
using namespace std;
struct book {
    string title ;
    string author;
    int pages;
    book (string t , string a,int p){
        title = t;
        author = a;
        pages = p;
    };
    void printinfo(){
        cout << "title :" << title << endl;
        cout << "Author :" << author << endl;
        cout << "Pages :" << pages << endl ;
        cout << "________________"<< endl;
    };

};
int main (){
    book b1  ("OMG", "REACH", 3000);
    book b2 ("Seii", "MAKI", 200);
    cout << "Book Information" << endl ;
    b1.printinfo();
    b2.printinfo();
    return 0;
}