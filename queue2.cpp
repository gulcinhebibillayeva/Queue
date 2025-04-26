#include <iostream>
#include<string>
using namespace std;
#include "Worker.h"
#include "queue.h"
#include "Printer.h"

int Worker::idGenerator = 0;


int main() {
    Printer printer;
    int number;
    cout << "How many workers will you enter?";
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        int  age, pageCount;
        string name, surname;
        cout << "Enter" << i + 1 << ". workers information:";
        cout << "Age: " << endl;
        cin >> age;

        cout << "pageCount: " << endl;
        cin >> pageCount;
        cout << "Name: " << endl;
        cin >> name;
        cout << "Surname: " << endl;
        cin >> surname;
        Worker* worker = new Worker( name, surname, age, pageCount);
        printer.request(worker);

    }
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Start Copy:" << endl;
    printer.start();
}