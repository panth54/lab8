#include <iostream>
#include <string>

using namespace std;

int main(){
    // variable declaration
    string input1, input2, input3, input4, input5;

    //Dialog
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, input1);
    cout << "Fahsai: Wow!!! " <<input1 <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << input1 << ": ";
    cin >> input2;
    cin.ignore();
    int year = stoi(input2.substr(0,2));
    cout << "Fahsai: I think you may be GEAR "<<year - 12<<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << input1 << ": ";
    getline(cin, input3);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << input1 << ": ";
    getline(cin, input4);
    cout << "Fahsai: "<<input4<<"....that is OK!!! I'm looking forward to watching "<<input3<<" with you.\n";
    cout << input1 << ": ";
    getline(cin, input5);
    cout << "Fahsai: 555+ see you "<<input4<<". Bye Bye \\(^ ^)/\n";

    return 0;
}