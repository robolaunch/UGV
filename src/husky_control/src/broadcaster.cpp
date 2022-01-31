#include <ros/ros.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <geometry_msgs/TransformStamped.h>



int main(int argc, char** argv){
    ros::init(argc, argv, "KAE_tf_broadcaster");
    ros::NodeHandle n;


    tf2_ros::StaticTransformBroadcaster broadcaster_camera;

    geometry_msgs::TransformStamped transform_stamped;

    transform_stamped.header.stamp = ros::Time::now();
    



    return 0;
}
