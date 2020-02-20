#include<bits/stdc++.h>
#define maxNoOfBooks 10

using namespace std;

class books
{
    public:
    int id;
    int score;
    bool isScanned;
    books()
    {
        isScanned = false;
    }
};

class libs
{
    public:
    int id;
    int nob;
    int daysSign;
    int noOfBooksPerDay;
    int whatBooks[maxNoOfBooks];
};

int main()
{
    int noOfBooks, noOfLibs, days;
    cin>>noOfBooks>>noOfLibs>>days;
    books B[noOfBooks];
    libs L[noOfLibs];
    cout<<noOfBooks<<' '<<noOfLibs<<' '<<days<<endl;
    for (int i = 0; i < noOfBooks; i++)
    {
        B[i].id = i;
        cin>>B[i].score;
    }

    for (int i = 0; i < noOfBooks; i++)
    {
        cout<<B[i].score<<' ';
    }
    cout<<endl;
    for (int i = 0; i < noOfLibs; i++)
    {
        L[i].id = i;
        cin>>L[i].nob;
        cin>>L[i].daysSign;
        cin>>L[i].noOfBooksPerDay;
        cout<<L[i].nob<<' '<<L[i].daysSign<<' '<<L[i].noOfBooksPerDay<<endl;
        for (int j = 0; j < L[i].nob; j++)
        {
            cin>>L[i].whatBooks[j];
        }
    }

}
