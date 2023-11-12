Jones wants to design a program that manages tasks and to-do lists. He wants to implement classes for Task and ToDoList with attributes like task description, due date, and completion status. Use arrays of objects to store task and to-do list information. Help him perform operations such as adding tasks, marking the status of the task, and displaying incomplete tasks.



Note: This kind of question helps in clearing Capgemini tests.

Input format :
The first line of input should contain an integer n, representing the number of tasks to be added.

For n items, the input consists of the description, due date, and an integer, N (0/1) in separate lines.

Output format :
The output displays all task descriptions that are not marked as completed.

Code constraints :
0 < Maximum number of tasks <= 10

0 <= N <= 1

1 < Length of description < 100

1 < Length of the due date < 20

Sample test cases :
Input 1 :
4
Finish Homework 
2023-01-15
0
Buy Groceries
2023-01-16
1
Call Mom
2023-01-18
0
Go for a Run
2023-01-20
1
Output 1 :
Finish Homework 
Call Mom



#include <iostream>

using namespace std;

struct Task {
    char description[100];
    char dueDate[20];
    bool isCompleted;
};

class ToDoList {
public:
    Task tasks[10];
    int numTasks;

    void addTask(char* description, char* dueDate, int status) {
        if (numTasks >= 10) {
            cout << "Task limit reached." << endl;
            return;
        }
        bool isCompleted = (status == 1);
        copyString(tasks[numTasks].description, description, sizeof(tasks[numTasks].description));
        copyString(tasks[numTasks].dueDate, dueDate, sizeof(tasks[numTasks].dueDate));
        tasks[numTasks].isCompleted = isCompleted;
        numTasks++;
    }

    void displayIncompleteTasks() {
        for (int i = 0; i < numTasks; i++) {
            if (!tasks[i].isCompleted) {
                cout << tasks[i].description << endl;
            }
        }
    }

    // Copy one char array to another without using strcpy
    void copyString(char* dest, char* src, size_t size) {
        for (size_t i = 0; i < size; i++) {
            dest[i] = src[i];
            if (src[i] == '\0') {
                break;
            }
        }
    }
};

int main() {
    ToDoList todo;
    int numTasks;
    cin >> numTasks;
    cin.ignore();

    for (int i = 0; i < numTasks; i++) {
        char description[100];
        char dueDate[20];
        int status;
        cin.getline(description, 100);
        cin.getline(dueDate, 20);
        cin >> status;
        cin.ignore();
        todo.addTask(description, dueDate, status);
    }

    todo.displayIncompleteTasks();
    return 0;
}
