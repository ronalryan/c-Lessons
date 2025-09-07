#include <iostream>

using namespace std; 

void happyBirthday(string name, int age); 

int main()
{
    string name;
    int age;

    cout << "whats your name" ; 
    cin >> name; 

    cout << "how old are you"; 
    cin >> age; 


    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age);


    return 0;
}
void happyBirthday(string name, int age){
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "you are " << age << " years old\n";

}