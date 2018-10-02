#ifndef IMPLICATOR_H
#define IMPLICATOR_H

#include <std_msgs/Bool.h>
#include <stdexcept>
#include <string>
class Implicator
{
private:
    bool arrayOfValues[2];
    bool time_to_send=false;
    void AddValue(bool newValue)
    {
        static uint8_t numOfValue=0;
        std::string log=std::string("Recorded ")+std::to_string(numOfValue)+std::string(" values");
        ROS_INFO(log.data());
        arrayOfValues[numOfValue]=newValue;
        numOfValue++;
        if(numOfValue==2)
        {
            time_to_send=true;
            numOfValue=0;
        }

    }
public:
    bool IsTimeToSend(){return time_to_send;}
    std_msgs::Bool GetImplication()
    {
        if(time_to_send)
        {
            std_msgs::Bool result;
            result.data=arrayOfValues[0]<=arrayOfValues[1];
            time_to_send=false;
            return result;
        }
        else
        {
            std::runtime_error e("Early calling function");
        }
    }

    void RecieverCallback(const std_msgs::Bool::ConstPtr& msg)
    {
        AddValue(msg->data);
    }
};

#endif // IMPLICATOR_H
