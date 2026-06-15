#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> tasks;
    int choice;
    string task;

    do {

        cout << "\n=== TO-DO LIST ===\n";
        cout << "1. Add Task\n";
        cout << "2. Show Tasks\n";
        cout << "0. Exit\n";

        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1:
                cout << "Task: ";
                getline(cin, task);
                tasks.push_back(task);
                break;

            case 2:
                for(int i = 0; i < tasks.size(); i++)
                    cout << i + 1 << ". " << tasks[i] << endl;
                break;
        }

    } while(choice != 0);

    return 0;
}
