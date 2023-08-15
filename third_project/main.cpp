#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{

//    int x =3;
//    int y = 4;
//    int c = y - x;
//    cout<<endl<<"hellow world";
//    cout<<endl<<c;
//    cout<<endl;



//    This is from lesson number 118 and about library "fstream",about write and read data to files.
    string path = "myfile.txt";
    fstream fs;
    fs.open(path,fstream::in | fstream::out | fstream::app);
    if (!fs.is_open())
        {
        cout<<"Error opening file.";
        }

        else
        {
            string msg;
            int value;
            cout<<"Your file is opening."<<endl;
            cout<<"Input 1 to append your text to file "<<path<<endl;
            cout<<"Input 2 to open file "<<path<<endl;
            cin>>value;

            if (value == 1)
            {
                cout<<"Input the text"<<endl;
                cin>>msg;
                fs<<endl<<msg;
            }
            else if (value == 2)
            {
                cout<<"You are input 2.Data was readen from file into console..."<<endl;
                while (!fs.eof())
               {
//                    msg="";
//                    cout<<"You are input '2'. File was readen and displayed ";
                    fs>>msg;
                    cout<<msg<<endl;
                }
            }

        }
     return 0;
}

