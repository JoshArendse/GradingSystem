#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int score1;
   int score2;
   int score3;
   int average;
   string name;

   cout << "Enter the student name: ";
   cin >> name;

   cout << endl;

   cout << "Enter the 3 exam scores for "<< name << endl;
   cin >> score1;
   cin >> score2;
   cin >> score3;

   cout << endl;

   average = (score1 + score2 + score3) / 3;

   if (average >= 60 && average < 90){
    cout << name << " has PASSED the class with: " << average << "%" << endl;
   } else if (average >= 90){
        cout << name << " has PASSED the class with: " << average << "% (code A)" << endl;
        } else{
            cout << "Unfortunaley " << name << " has NOT passed the class" << endl;
        }
}
