#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Take 3 inputs

    string sentence, word, replacement;

    cout<< "Enter sentence\n";
    getline(cin,sentence);


    cout << " Enter word which has to be replaced\n";
    cin >> word;

    cout << "Enter replacement word\n";
    cin >> replacement;

    // logic implementation

    cout << "Printing results \n";
    //cout << sentence.find(word);

    while(sentence.find(word) != string::npos)
    {
        sentence.replace(sentence.find(word),word.size(),replacement);
    }
    cout << sentence << endl;


    return 0;

}
