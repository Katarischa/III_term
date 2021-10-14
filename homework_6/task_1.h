#ifndef III_TERM_TASK_1_H
#define III_TERM_TASK_1_H
#include <iostream>


class smart_double {
public:

    //constructors
    smart_double(double new_smarty) {
        smarty = new double(new_smarty);
    }
    smart_double(double* new_smarty){
        smarty = new_smarty;
    }
    smart_double() = default;
    smart_double(const smart_double& smart) = delete;

    smart_double& operator=(const smart_double& smart) = delete;
    smart_double(smart_double&& smart) noexcept ;


    // get value operator
    double get_value() const;

    friend double operator*(const smart_double &smart);

    smart_double& operator=( smart_double&& smart) noexcept ;

    // out operator
    friend std::ostream &operator<<(std::ostream &out, const smart_double &smart);

    //destructor
    ~smart_double(){
        delete smarty;
    }


private:
    double *smarty;
};


#endif //III_TERM_TASK_1_H
