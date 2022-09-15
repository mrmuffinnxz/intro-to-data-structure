#include <iostream>
#include <iomanip>
#include <map>
#include <utility>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    string subject, teacher;
    float score;

    map<string, pair<float, float>> subject_score, teacher_score;

    while (n--)
    {
        cin >> subject >> teacher >> score;

        if (subject_score.find(subject) != subject_score.end())
        {
            subject_score[subject].first += score;
            subject_score[subject].second++;
        }
        else
        {
            subject_score[subject].first = score;
            subject_score[subject].second = 1;
        }

        if (teacher_score.find(teacher) != teacher_score.end())
        {
            teacher_score[teacher].first += score;
            teacher_score[teacher].second++;
        }
        else
        {
            teacher_score[teacher].first = score;
            teacher_score[teacher].second = 1;
        }
    }

    cout << std::fixed << std::setprecision(2);

    for (auto const &x : subject_score)
    {
        cout << x.first << " " << x.second.first / x.second.second << "\n";
    }
    for (auto const &x : teacher_score)
    {
        cout << x.first << " " << x.second.first / x.second.second << "\n";
    }
}