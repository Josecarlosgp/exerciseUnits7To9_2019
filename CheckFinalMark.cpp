// Jose Carlos Giner Poveda
// CheckFinalMark
#include <iostream>
using namespace std;
int main()
{
    const int MAX=10;
    int numbers[MAX];
    int increments=0;
    int decreases=0;
    
    cout<<"Enter 10 numbers to know the increments and dreceases in pairs."<<endl;
    
    for(int n=0; n<MAX;n++)
    {
        cout << "Enter the number"<<" "<<n+1<<": ";
        cin >> numbers[n];
        if(numbers[n]<0)
        {
            cout <<"Only possitive numbers please"<<endl;
            n--;
        }
    }
    for(int j=0;j<MAX-1;j++)
    {
        if(numbers[j] < numbers [j+1])
        {
            increments++;
        }
        else if(numbers[j] > numbers [j+1])
        {
            decreases++;
        }
    }
    cout <<"Increments: " << increments<<endl;
    cout <<"decreases: " << decreases<<endl;
}
            
