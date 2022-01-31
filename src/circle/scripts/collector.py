import rospy
import importlib
from time import sleep
#import rosgraph_msgs.msg._Clock as cc
#cc.Clock()

#from rosgraph_msgs.msg._Clock import Clock
#from rosgraph_msgs.msg import Clock

topics = ["/clock", "/gazebo/performance_metrics"]
types = ["rosgraph_msgs/Clock", "gazebo_msgs/PerformanceMetrics"]

def callback(data):
    print(data)
    sleep(1)

if __name__ == "__main__":
    rospy.init_node("collector")

    for topic, type in zip(topics, types):
        #preprocess types
        print("type is ", type)
        type_splitted = type.split("/")
        print("topic spliitted is ", type_splitted)
        type_str = type_splitted[0] + ".msg._" + type_splitted[1]
        print("type_str is ", type_str)
        imported = importlib.import_module(type_str)


        rospy.Subscriber(topic, getattr(imported, type_splitted[1]), callback)
        


    rospy.spin()

