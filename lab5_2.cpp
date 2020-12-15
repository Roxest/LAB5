#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
double deg2rad(double deg){
    double radi = deg*M_PI/180;
    return radi;
}
double rad2deg(double rad){
    double degr = rad*180/M_PI;
    return degr;
}
double findXComponent(double lenght1,double lenght2,double rad1,double rad2){
    double xl1 = lenght1*cos(rad1);
    double xl2 = lenght2*cos(rad2);
    double xcom = xl1+xl2;
    return xcom;
}
double findYComponent(double lenght1,double lenght2,double rad1,double rad2){
    double yl1 = lenght1*sin(rad1);
    double yl2 = lenght2*sin(rad2);
    double ycom = yl1+yl2;
    return ycom;
}
double pythagoras(double xcom,double ycom){
    double result = sqrt(pow(xcom,2)+pow(ycom,2));
    return result;
}
void showResult(double fnl,double direct){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout << "Length of the resultant vector = "<<fnl<<endl;
    cout << "Direction of the resultant vector (deg) = "<<direct<<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
