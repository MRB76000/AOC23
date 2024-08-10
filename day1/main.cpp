#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    
    long fin = 0;
    vector<int> myVector;

    string stronk;

    ifstream file("text.txt");

    while (getline(file, stronk))
    {
        for (char i : stronk)
        {
            if (isdigit(i))
            {
                myVector.push_back(i);
            }
        }
        char first = myVector[0];
        
        char last = myVector[myVector.size() - 1];

        
        
        int lex = ((first - 48) * 10) + (last -48);

        // cout << lex;

        

        // cout << '\n';


        myVector.clear();
         
        fin += lex;
        
        
    }

    cout << fin;

    file.close();

    return 0;
}