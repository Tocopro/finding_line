

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int output = 0;
int number;
int main()
{
    fstream sonnets, reprint, reprint2;
    sonnets.open(R"(C:\Users\NEAK\Documents\Speare\sonnets_file.txt)", ios::in);
    reprint.open(R"(C:\Users\NEAK\Documents\Speare\reprint_file.txt)", ios::out);
    int count = 1;
    string line;
    if(sonnets.is_open())
    {
        while(getline(sonnets, line ))
        {
            if(reprint.is_open())
            {
                reprint << count << ". " << line << "\n";
                count += 1;
            }

        }
    }
    sonnets.close();
    reprint.close();

    cout << "Enter Number: ";
    cin >> number;
    cout << number;
    reprint.open(R"(C:\Users\NEAK\Documents\Speare\sonnets_file.txt)", ios::in);
    reprint2.open(R"(C:\Users\NEAK\Documents\Speare\solution_file.txt)", ios::out);
    string c;
    while(getline(reprint,line))
    {
        if(reprint2.is_open() && number == output)
        {
            reprint2 << line << '\n';
            output += 1;
        }




    }
    reprint2.close();
    reprint.close();

    return 0;
}
