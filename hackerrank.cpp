
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

// Write your Student class here
class Student {
private:
    vector<int> scores;

public:
    void input() {
        int numScores;
        cin >> numScores;

        scores.resize(numScores);
        for (int i = 0; i < numScores; i++) {
          cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int Total = 0;
        for (int i = 0; i < scores.size(); i++) {
            Total += scores[i];
        }
        return Total;
    }
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}