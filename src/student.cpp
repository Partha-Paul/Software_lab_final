#include "student.h"

Student::Student(){
    cout << "Student constructor" << endl;
}

float Student::avg(vector<float> vec){
    float total = 0;
    for(int i=0; i<vec.size(); i++){
        total += vec[i];
    }
    return total / vec.size();
}

Student::~Student(){
    cout << "Student destructor" << endl;
}
