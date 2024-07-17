#include <iostream>
#include <queue>
#include "tasks.h"

using namespace std;

int main() {
    priority_queue<Task> tasks;
    tasks.push(Task("Shampoo carpets", 2));
    tasks.push(Task("Empty Trash", 3));
    tasks.push(Task("Replace light bulb", 4));
    tasks.push(Task("clean coffee maker", 1));
    tasks.push(Task("Fix overflowing Sink", 9));

    while (tasks.size() > 0) {
        Task most_important = tasks.top();
        tasks.pop();
        cout << most_important.get_priority() << " - " << most_important.get_description() << endl;
    }
    return 0;
}
