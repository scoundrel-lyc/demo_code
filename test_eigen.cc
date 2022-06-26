#include <iostream>
#include <eigen3/Eigen/Dense>



int main(){
    Eigen::AngleAxisd sr(M_PI/4, Eigen::Vector3d(0,0,1));
    std::cout  <<  sr.angle()  << std::endl;
    std::cout << sr.axis() << std::endl;
    Eigen::Matrix3d m;


    
    m = sr.toRotationMatrix();
    std::cout << m << std::endl;
    
    return 0;
}