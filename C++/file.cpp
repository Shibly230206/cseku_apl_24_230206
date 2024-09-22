

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Create a text file
    ofstream MyFileWrite("output.txt");

    // Write to the file
    MyFileWrite << "shibly";

    // Close the file
    MyFileWrite.close();

    // Create a text string, which is used to output the text file
    string RandomText;

    // Read from the text file
    ifstream MyFileRead("input.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyFileRead, RandomText))
    {
        // Output the text from the file
        cout << RandomText;
    }

    // Close the file
    MyFileRead.close();

    return 0;
}