/*
  J40-3148-2019
  Muli Samuel
  Book keeping
*/
#include <iostream>
using namespace std;
class books
{
	public:
    char name[50],author[50],publisher[50];
    int entry,account,cost,copies;
} book[10];
int main()
{
	 cout <<" Muli Samuel \n J40-3148-2019 ";
	 cout << "\n\t\t\t----WELCOME----";
     cout << "\n\t\t***Muli Samuel's library store***";
     cout << "\nEnter information of books: " << endl; 
    for(int i = 0; i < 10; ++i) // storing information
    {
        book[i].entry = i+1;
        cout << "For entry number " << book[i].entry << "," << endl;
        cout<< "Enter name                      : ";
        cin >> book[i].name;
        cout<<"Enter author's name              : ";
        cin >> book[i].author;
        cout<<"Enter the name of the publisher  : ";
        cin>>  book[i].publisher;
        cout<<"Enter the books account          : ";
        cin>>  book[i].account;
        cout<<"Input the cost                   : ";
        cin>>  book[i].cost;
        cout<<"Enter number of copies           : ";
        cin>>  book[i].copies;
        cout << endl;
    }
   
    cout << "Displaying Information: " << endl; // Displaying information
       for(int i = 0; i < 10; ++i)
    {
        cout << "\nEntry number : " << i+1 << endl;
        cout << "Name         : "<< book[i].name << endl;
        cout << "Author       : "<< book[i].author << endl;
        cout << "Publisher    : "<<book[i].publisher<<endl;
        cout << "Book account : "<<book[i].account<<endl;
        cout << "Book cost    : "<<book[i].cost<<endl;
        cout << "Copies       : "<<book[i].cost<<endl;  
    }
    cout << "\n\n\t\t***Thank you for trusting our services***";
    return 0;
}//code by J40-3148-2019
