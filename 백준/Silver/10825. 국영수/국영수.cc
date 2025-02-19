#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct Student { // 구조체
    string name;
    int word;
    int eng;
    int math;
};

bool compare(Student a, Student b) {
    if(a.word == b.word && a.eng == b.eng && a.math == b.math) {
        return a.name < b.name;
    }
    else if(a.word == b.word && a.eng == b.eng) {
        return a.math > b.math;
    }
    else if(a.word == b.word) {
        return a.eng < b.eng;
    }
    else {
        return a.word > b.word;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 0;
    cin >> n;
    vector<Student> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].name >> v[i].word >> v[i].eng >> v[i].math;
    }

    sort(v.begin(), v.end(), compare);

    for(int j = 0; j < n; j++) {
        cout << v[j].name << "\n";
    }
    return 0;
}