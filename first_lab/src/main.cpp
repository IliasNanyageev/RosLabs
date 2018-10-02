#include <ros/ros.h>
#include "implicator.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"fisrt_lab_node");

    ROS_INFO("Node started");
    ros::NodeHandle nh;
    Implicator implicator;
    ros::Publisher bool_out_publisher=nh.advertise<std_msgs::Bool>("bool_out",1);
    ros::Subscriber bool_in_subscriber=nh.subscribe("bool_in",1,&Implicator::RecieverCallback,&implicator);
    while(ros::ok())
    {
        if(implicator.IsTimeToSend())
        {
            bool_out_publisher.publish(implicator.GetImplication());
            ROS_INFO("Implication result published");
        }
        ros::spinOnce();
    }
    return 0;
}


