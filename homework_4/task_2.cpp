#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>

struct Lessons;

struct Students {
    std::vector<Lessons*> lessons;
    std::string name;
};


struct Lessons {

    std::vector<Students*> students;
    std:: string object;
};

int findStudentInLesson(Lessons& lesson, Students& student) {
    int len = lesson.students.size();
    for (unsigned i; i < len; i++){
        if ((*lesson.students[i]).name == student.name){
            return i;
        }
    }
    return -1;
}

void goToLesson(Lessons& lesson, Students& student) {
    if (findStudentInLesson( lesson, student) == -1) {
        lesson.students.push_back(&student);
        student.lessons.push_back(&lesson);
    }
}

void dontGoToLesson(Lessons& lesson, Students& student) {
    // find student in lesson.students
}



int main() {
    Lessons math;
    math.object = "Math";
    Lessons bio;
    bio.object = "Bio";
    Students alex;
    alex.name = "Alexey";
    goToLesson(bio , alex);
    return 0;
}