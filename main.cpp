// write your code here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()

{
    int rnum;
   
  //  cout<<" Enter N amount of numbers to generate ";
    cin>>rnum;
   
    srand(time(0));
    for(i=0; i< rnum; i++)
    {
        
        cout<<rand()%101<<" ";
    }
    
    return 0;
}
