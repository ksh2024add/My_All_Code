// 너의 평점은
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class sub_all{
public:
    string name;
    double gpa;
    string grade;

    void input_data(){
        cin >> name >> gpa >> grade;
    }

    double score(){
        if(grade == "A+") return 4.5;
        if(grade == "A0") return 4.0;
        if(grade == "B+") return 3.5;
        if(grade == "B0") return 3.0;
        if(grade == "C+") return 2.5;
        if(grade == "C0") return 2.0;
        if(grade == "D+") return 1.5;
        if(grade == "D0") return 1.0;
        if(grade == "F") return 0.0;
        return -1.0;
    }

    bool ispass(){
        return grade == "P";
    }
};
// 메인함수에는 클래스를 불러오는 함수 
// 총점과 총 학점을 표현할 변수 선언 (0.0으로 초기화)
// 과목 입력 받기(반복문)
// 평균 계산 및 출력 함수 작성

int main(){
    sub_all subdata[20];
    double tot_gpa = 0.0;
    double tot_score = 0.0;

    for(int i = 0; i < 20; i++){
        subdata[i].input_data();

        if (!subdata[i].ispass()){
            tot_gpa += subdata[i].gpa;
            tot_score += subdata[i].gpa * subdata[i].score();
        }
    }

    if(tot_gpa > 0)
        cout << fixed << setprecision(6) << (tot_score/tot_gpa) << endl;
    else
        cout << 0.000000 << endl;

    
    return 0;
}