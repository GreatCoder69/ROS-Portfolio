#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
void messageCallback(const std_msgs::String::ConstPtr& msg)
{
  std::cout << msg->data << std::endl;
}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "group_chat_subscriber");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("group_chat", 1000, messageCallback);
  ros::spin();
  return 0;
}

