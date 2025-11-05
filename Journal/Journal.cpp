#include <iostream>

using namespace std;

void help_list()
{
    cout<<"-add *category*  - adds content to desired category\n"
          "-remove *category* - removes content from desired category\n"
          "-status *category* - lists the content of the desired category\n"
          "*command* +to_watch - uses category of wishlisted media\n"
          "*command* +watched - uses category of previously seen media\n"
          "*command* +time_stamp - uses category of currently seen Season, Episode, and time stamp (bookmark)\n"<<endl;
    
}
//test
int main()
{
    string input;

    cout<<"enter '?' for command list"<<endl;
    
    cin >> input;

    if (input == "?" )
    {
        help_list();
    }

    
}