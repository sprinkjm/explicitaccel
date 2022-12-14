#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>
#include <ros/time.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float64MultiArray.h>
#include <std_msgs/MultiArrayDimension.h>
#include <std_msgs/MultiArrayLayout.h>
#include "explicitaccel_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_explicitaccel_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_explicitaccel_geometry_msgs_Twist* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_explicitaccel_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_explicitaccel_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_explicitaccel_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_explicitaccel_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Bool* msgPtr, SL_Bus_explicitaccel_std_msgs_Bool const* busPtr);
void convertToBus(SL_Bus_explicitaccel_std_msgs_Bool* busPtr, std_msgs::Bool const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_explicitaccel_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_explicitaccel_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Float64MultiArray* msgPtr, SL_Bus_explicitaccel_std_msgs_Float64MultiArray const* busPtr);
void convertToBus(SL_Bus_explicitaccel_std_msgs_Float64MultiArray* busPtr, std_msgs::Float64MultiArray const* msgPtr);

void convertFromBus(std_msgs::MultiArrayDimension* msgPtr, SL_Bus_explicitaccel_std_msgs_MultiArrayDimension const* busPtr);
void convertToBus(SL_Bus_explicitaccel_std_msgs_MultiArrayDimension* busPtr, std_msgs::MultiArrayDimension const* msgPtr);

void convertFromBus(std_msgs::MultiArrayLayout* msgPtr, SL_Bus_explicitaccel_std_msgs_MultiArrayLayout const* busPtr);
void convertToBus(SL_Bus_explicitaccel_std_msgs_MultiArrayLayout* busPtr, std_msgs::MultiArrayLayout const* msgPtr);


#endif
