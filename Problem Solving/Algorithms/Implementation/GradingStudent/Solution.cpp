#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades) {
    
    vector<int> finalGrades  ;
    for(int i = 0; i < grades.size();i++){
        int grade = grades.at(i);
      if (grade > 37)  {         
          int mul = floor(grade / 5.0) + 1;
          int fg = mul * 5;
          if(fg-grade < 3){
              finalGrades.push_back(fg);
          } else {
            finalGrades.push_back(grade);
          }
      }
      else{
            finalGrades.push_back(grade);
      }
    }
    return finalGrades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}