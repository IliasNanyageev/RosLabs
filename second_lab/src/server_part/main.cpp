#include <ros/ros.h>
#include "QuadraticEquationSolver.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"second_lab_server_node");

    ROS_INFO("Server started");
    ros::NodeHandle nh;
    QuadraticEquationSolver solver;
    ros::ServiceServer service=nh.advertiseService("quadratic_equation_solver",
                                                   &QuadraticEquationSolver::ServerCallback,
                                                   &solver);
    ROS_INFO("Ready to solve your quadratic equation");
    ros::spin();
    return 0;
}


