#include<iostream>
using namespace std;
class student {
private:
	int id;
	double score;
public:
	int getid() {
		return id;
	}
	double getscore() {
		return score;
	}
	void setid(int i) {
		id = i;
	}
	void setscore(double s) {
		score = s;
	}
	int maxscore(student* a, int n) {
		int maxid = a[0].getid();
		double maxscore = a[0].getscore();
		for(int i=0; i<n; i++) {
			if(a[i].getscore() > maxscore) {
				maxscore = a[i].getscore();
				maxid = a[i].getid();
			}
		}
		return maxid;
	}
};
int maxscore(student* a, int n) {
    int maxid = a[0].getid();
    double maxscore = a[0].getscore();
    for(int i=0; i<n; i++) {
        if(a[i].getscore() > maxscore) {
            maxscore = a[i].getscore();
            maxid = a[i].getid();
        }
    }
    return maxid;
}

int main() {
    const int n=5;
    student a[n];
    for(int i=0; i<n; i++) {
        int id;
        double score;
        cin >> id >> score;
        a[i].setid(id);
        a[i].setscore(score);
    }
    student s;
    int maxid = s.maxscore(a, n);
    cout << "最高分学生的ID为: " << maxid << endl;
    return 0;
}
