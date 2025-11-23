#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

void help_list()
{
    cout<<"add *category*  - adds content to desired category\n"
          "rm *category* - removes content from desired category\n"
          "status *category* - lists the content of the desired category, use '.' to list all\n"
          "*command* -to_watch - uses category of wishlisted media\n"
          "*command* -watched - uses category of previously seen media\n"
          "*command* -time_stamp - uses category of currently seen Season, Episode, and time stamp (bookmark)\n"<<endl;
    
}

int main()
{
    
    string save[3];

    cout<<"enter '?' for command list"<<endl;
    
    cin>>save[0];

    if (save[0] == "?")
    {
        help_list();
        cin>>save[0];
    }
    
    cin>>save[1];
    cin>>save[2];
    
    if (save[0]=="add")
    {
        if (save[1]=="-to_watch")
        {
            cout<<endl;
            cout<<"saved\"" << save[2]<<"\" to wishlist!" <<endl; 
        }
        else if (save[1]=="-watched")
        {
            cout<<endl;
            cout<<"saved\"" << save[2]<<"\" to trophy list!" <<endl;
        }
        else if (save[1]=="-time_stamp")
        {
            cout<<endl;
            cout<<"saved \"" << save[2]<<"\" to bookmark!" <<endl;
        }
    }
    if (save[0]=="rm")
    {
        if (save[1]=="-to_watch")
        {
            cout<<endl;
            cout<<"removed\"" << save[2]<<"\" from wishlist!" <<endl;
        }
        else if (save[1]=="-watched")
        {
            cout<<endl;
            cout<<"removed\"" << save[2]<<"\" from trophy list!" <<endl;
        }
        else if (save[1]=="-time_stamp")
        {
            cout<<endl;
            cout<<"removed \"" << save[2]<<"\" from bookmark!" <<endl;
        }
    }

    
    
    
}