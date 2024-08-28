1. Description : Using ROS make a chatroom for users where they can view and send messages that all users can see. Ensure that the chat room has at least 3 users/nodes that connect to the same.
Approach: There is a node which acts as both publisher and subscriber. It can send messages to the other two users as well as groupchat node as a publisher. It can also receive messages from the other
2 users along with their usernames as a subscriber. There is a node which acts as the main groupchat that displays username of the sender along with their message. This groupchat node acts only as a
subscriber of the other 3 users.

2. Rostopic List:
/group_chat
/rosout
/rosout_agg

3. Rosmsg list:
std_msgs/String
Rosservice list:
/group_chat_subscriber/get_loggers
/group_chat_subscriber/set_logger_level
/rosout/get_loggers
/rosout/set_logger_level
/user1/get_loggers
/user1/set_logger_level
/user2/get_loggers
/user2/set_logger_level
/user3/get_loggers
/user3/set_logger_level

4. RQT Graph has been attached.

5. Youtube Link : https://youtu.be/YL47fk-DagY
