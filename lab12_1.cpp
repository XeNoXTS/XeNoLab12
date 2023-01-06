#include<iostream>
#include<string>
#include<ctime>

using namespace std;

int main(){
    string grades[] = {"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grades[rand()%9] << " in this 261102.";
    return 0;
}

