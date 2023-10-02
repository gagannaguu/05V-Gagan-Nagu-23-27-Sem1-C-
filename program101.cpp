#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    
    srand(time(nullptr));

    int N, Q;
    cout << "Enter the total number of students: ";
    cin >> N;
    cout << "Enter the total number of questions: ";
    cin >> Q;

    int groupSize = 5;
    int totalGroups = N / groupSize;
    int remainingStudents = N % groupSize;

    if (remainingStudents > 0) {
        cout << "Note: " << remainingStudents << " students will be left out as they can't form complete groups." << endl;
    }

    vector<int> students(N);
    vector<int> questions(Q);

    for (int i = 0; i < N; ++i) {
        students[i] = i + 1;
    }

    for (int i = 0; i < Q; ++i) {
        questions[i] = i + 1;
    }

    random_shuffle(students.begin(), students.end());
    random_shuffle(questions.begin(), questions.end());

    int questionsPerGroup = Q / totalGroups;
    int extraQuestions = Q % totalGroups;

    for (int group = 0; group < totalGroups; ++group) {
        cout << "Group " << (group + 1) << " Students: " << endl;
        for (int i = 0; i < groupSize; ++i) {
            int student = students[group * groupSize + i];
            cout << "Student " << student << " (Problem ";

            for (int j = 0; j < questionsPerGroup; ++j) {
                cout << questions[group * questionsPerGroup + j];
                if (j < questionsPerGroup - 1) {
                    cout << ", ";
                }
            }

            if (extraQuestions > 0) {
                cout << ", " << questions[Q - extraQuestions];
                extraQuestions--;
            }

            cout << ")";
            if (i < groupSize - 1) {
                cout << ", " << endl;
            }
        }
        cout << endl;
    }

    return 0;
}