#include <iostream>
using namespace std;
class publications
{
private:
    string title;
    float price;

public:
    virtual void ISOvesize() = 0; // Pure virtual class
    void getdata()
    {
        cout << "Enter the title: ";
        cin >> title;
        cout << "Enter the price: ";
        cin >> price;
    }
    void showdata()
    {
        cout << "\n\nTitle of Publication: " << title << endl;
        cout << "Price of Publication: " << price << endl;
    }
};
class books : public publications
{
private:
    int page_count;

public:
    void ISOvesize() {} // have to write in every class
    // overridden functions
    void getdata()
    {
        publications ::getdata();
        cout << "Enter book page count: ";
        cin >> page_count;
    }
    void showdata()
    {
        publications::showdata();
        cout << "Book  Page Count: " << page_count << endl;
        if (page_count > 500)
        {
            cout << "\t------ OVERSIZED ------" << endl;
        }
    }
};
class tapes : public publications
{
private:
    float playing_time;

public:
    void ISOvesize() {}
    // overridden functions
    void getdata()
    {
        publications ::getdata(); // scope resolution operator
        cout << "Enter Playing time in minutes: ";
        cin >> playing_time;
    }
    void showdata()
    {
        publications ::showdata();
        cout << "Playing time (minutes): " << playing_time << endl;
        if (playing_time > 90.0)
        {
            cout << "\t------ OVERSIZED ------" << endl;
        }
    }
};
int main()
{
    char ch, ch1;
    /*
      publications *ptr = new books();
      ptr->getdata();
      to make object of pure abstract class

*/
    books Bobj;
    tapes Tobj;
    do
    {
        cout << "Press B for Books and T for Tapes: ";
        cin >> ch;
        if (ch == 'B')
        {
            Bobj.getdata();
            Bobj.showdata();
        }
        else
        {
            if (ch == 'T')
            {
                Tobj.getdata();
                Tobj.showdata();
            }
        }
        cout << "\n\tDo you want to check again? (Y/N) : ";
        cin >> ch1;
        if (ch1 != 'Y')
        {
            break;
        }

    } while (ch1 = 'Y');
}
