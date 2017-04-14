# 基于Leap Motion的多自由度机械臂控制系统

## 简介

该系统通过感知手部运动状况，达到对多自由度机械臂进行同步模拟的功能。

## 基本流程

  * 信号输入源Leap Motion感知手部运动，Data传至上位机（PC）
  
  * 上位机所建立的转换模型将手部数据转换为机械臂运动数据
  
  * 上位机与Arduino通信传递机械臂数据
  
  * Ardunio负责机械臂运动
  
## 硬件平台

控制芯片采用Arduino（我才不会说是组成员懒得进行底层开发）

机械臂为6自由度：钳口关节×1，腕关节×1，肘关节×3，肩关节×1

#### 笛卡尔坐标系下

肩关节：绕xOz平面转动

肘关节：绕xOy平面转动

腕关节：以腕至钳口作向量为轴转动

钳口关节：用于抓取
  
## 通信方式

上位机和Ardunio目前采用串口调试进行通信。

## 转换模型

基于Leap Motion的机械臂交互控制研究(https://wenku.baidu.com/view/7a4af3e4fad6195f302ba6b0.html?re=view)

## 项目组成员

YYX.Kang

W.Zheng

SL.Li
