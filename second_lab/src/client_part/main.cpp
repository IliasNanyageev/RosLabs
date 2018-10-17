#include "ros/ros.h"
#include "QuadraticEquationSolver.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "second_lab_client_node");
    ROS_INFO("Client started");
    int max_generated_value=1000;
    int min_generated_value=0;
    ros::NodeHandle nh;
    ros::Rate r(1);

    ros::ServiceClient client = nh.serviceClient<nanyageev_ir_13345_2_2::QuadraticEquationSolver>("quadratic_equation_solver");
    nanyageev_ir_13345_2_2::QuadraticEquationSolver srv;
    srand(time(NULL));
    while(ros::ok())
    {
        srv.request.a=min_generated_value+rand()%max_generated_value;
        srv.request.b=min_generated_value+rand()%max_generated_value;
        srv.request.c=min_generated_value+rand()%max_generated_value;
        ROS_INFO("Send request with params: a=%f, b=%f, c=%f",srv.request.a,srv.request.b,srv.request.c);
        if(client.call(srv))
        {
            ROS_INFO("Recived response: %s",srv.response.answer.c_str());
        }
        else
        {
            ROS_ERROR("Failed to call service quadratic_equation_solver");
        }
        r.sleep();
    }

    return 0;
}
