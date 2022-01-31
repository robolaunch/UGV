#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char** argv){
    ros::init(argc, argv, "circler");
    ros::NodeHandle n;
    auto circle = n.advertise<geometry_msgs::Twist>("/husky_velocity_controller/cmd_vel", 10);

    geometry_msgs::Twist msg;
    msg.angular.z = 100;
    msg.angular.y = 0;
    msg.angular.x = 0;
    msg.linear.x = 0;
    msg.linear.y = 0;
    msg.linear.z = 0;

    while(ros::ok()){
        circle.publish(msg);    
    }




    return 0;
}