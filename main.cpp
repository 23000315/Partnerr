#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    int age;
    string interests;
    string personality;

};
bool isCompatible(const Person& person1, const Person& person2){
    int ageDifference = abs(person1.age - person2.age);
    return ageDifference <= 5;
}

int main()
{
    Person person1 {"Khumbudzo", 22, "Watching soccer, Playing games", "talkative"};
    Person person2 {"Emmarentia", 17, "Cooking, Reading", "creative"};
    if(isCompatible(person1, person2)){
        cout << person1.name << " and " << person2.name << " are compatible!\n";
    } else {
        cout << person1.name << " and " << person2.name << " are not compatible.\n";
    }
    return 0;
}
