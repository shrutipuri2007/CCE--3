#include <iostream>
#include <string>
using namespace std;

struct Game {
    int score;
    Game* next;
};

int main() {
    Game* head = NULL;
    Game* temp;
    Game* newNode;

    int n, i, score;
    int highest, lowest;

    cout << "Enter number of game scores: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        newNode = new Game;

        cout << "Enter score: ";
        cin >> newNode->score;

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    cout << "\n--- Game Scores ---\n";

    temp = head;
    highest = head->score;
    lowest = head->score;

    while (temp != NULL) {
        cout << "Score: " << temp->score << endl;

        if (temp->score > highest)
            highest = temp->score;

        if (temp->score < lowest)
            lowest = temp->score;

        temp = temp->next;
    }

    cout << "\nHighest Score: " << highest << endl;
    cout << "Lowest Score: " << lowest << endl;

    return 0;
}
