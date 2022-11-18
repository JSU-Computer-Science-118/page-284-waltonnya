// write your code here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()

{
    int i, rnum, amount;
   
    cout<<" Enter N amount of numbers to generate ";
    cin>>amount;
   
    srand(time(0));
    for(i=0; i<amount; i++)
    {
        rnum = rand()%(100)+1;
        cout<<endl<<rnum;
    }
    cout<<endl;
    return 0;
}
