#include <iostream>
using namespace std;
int main()
{
    int t, mon;
    char **month = new char*[12];
    month[0] = "January";
    month[1] = "February";
    month[2] = "March";
    month[3] = "April";
    month[4] = "May";
    month[5] = "June";
    month[6] = "July";
    month[7] = "August";
    month[8] = "September";
    month[9] = "October";
    month[10] = "November";
    month[11] = "December";

    cin>>t;
    while(t-- > 0){
        cin>>mon;
        if(mon <= 12 && mon > 0)
            cout<<month[mon-1]<<endl;
        else
            cout<<"error"<<endl;
    }

    for(int i=0; i<12; i++)
        delete []month[i];
    delete []month;
	return 0;
}

