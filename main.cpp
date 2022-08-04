#include <iostream>

using namespace std;

float average(float *tab, int hm)
{
    float sum=0;

    for(int i=0; i<hm; i++)
    {
        sum +=*tab;
        //*tab=999; Verification that we work on original data
        tab++;
    }
    return sum/hm;
}

int main()
{
    cout << "This program calculate average from 3 predefined values (1,5; 2,3; 0,75) using reference to the array:" << endl;

    float table[3];

    table[0]=1.5;
    table[1]=2.3;
    table[2]=0.75;

    cout<<"Average is: "<<average(table,3)<<endl;

    cout<<"Tables[0,1,2]=: "<<endl;

    cout<<table[0]<<endl;
    cout<<table[1]<<endl;
    cout<<table[2]<<endl;

    cout<<"Press any key to exit";
    getchar();
    getchar();

    return 0;
}
