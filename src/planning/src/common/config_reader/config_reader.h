#ifndef CONFIG_READER_H_
#define CONFIG_READER_H_

#include "rclcpp/rclcpp.hpp"
#include<yaml-cpp/yaml.h>
#include<ament_index_cpp/get_package_share_directory.hpp>

#include<map>
#include<string>
namespace Planning
{

   struct VehicleStruct
   {
      int id_ = 0;
      std::string frame_= "";   //车序号
      double length_ = 0.0;     //坐标系
      double width_ = 0.0;      //长
      double pose_x_ = 0.0;     //宽
      double pose_y_ = 0.0;     //x
      double pose_theta = 0.0;  //y
      double speed_ori_ = 0.0;  //初速度
   };

   struct PNCMapStruct
   {
      std::string frame_ = "";      //坐标系
      int type_=0;                  //类型
      double road_length_ = 0.0;     //道路宽度
      double road_half_width_ = 0.0; //车道半宽
      double segment_len_ = 0.0;    //道路分段长度
      double speed_limit_ = 0.0;     //限速
   };
   struct GlobalPathStruct
   {
      int type_ = 0;
   };
   struct ReferLineStruct
   {
      int type_ = 0;       //类型
      int front_size_ = 0; //前方点数
      int back_size_ = 0;  //后方点数
   };
   struct LocalPathStruct
   {
      int curve_type_ = 0;//曲线类型
      int path_size_ = 0; //路径点数
   };
   struct LocalSpeedsStruct
   {
      int speed_size_ = 0; //速度点数
   };
   struct DecisionStruct //决策
   {
      double safe_dis_l_ = 0.0;//侧向安全距离
      double safe_dis_s_ = 0.0;//纵向安全距离
   };
   struct ProcessStruct //总流程
   {
      double obs_dis_ = 0.0; //考虑障碍取的距离
   };


class ConfigReader
{
public:
   ConfigReader();

   void read_vehicle_config(VehicleStruct &vehicle,const std::string &name);
   void read_vehicles_config();
   inline VehicleStruct main_car()const {return main_car_;}
   inline VehicleStruct obs_car1()const {return obs_car1_;}
   inline VehicleStruct obs_car2()const {return obs_car2_;}
   inline VehicleStruct obs_car3()const {return obs_car3_;}
   std::unordered_map<int,VehicleStruct> obs_pair()const{return obs_pair_;}

   void read_pnc_map_config();
   inline PNCMapStruct pnc_map() const {return pnc_map_;}

   void read_global_path_config();
   inline GlobalPathStruct global_path() const{return global_path_;}

   void read_reference_line_config();
   inline ReferLineStruct refer_line()const {return refer_line_;}

   void read_local_path_config();
   inline LocalPathStruct local_path()const {return local_path_;}

   void read_local_speeds_config();
   inline LocalSpeedsStruct local_speeds()const {return local_speeds_;}

   void read_decision_config();
   inline DecisionStruct decision()const {return decision_;}

   void read_planning_process_config();
   inline ProcessStruct process()const {return process_;}

   void read_move_cmd_config();

private:
   YAML::Node planning_config;
   
   VehicleStruct main_car_;
   VehicleStruct obs_car1_;
   VehicleStruct obs_car2_;
   VehicleStruct obs_car3_;
   
   std::unordered_map<int,VehicleStruct> obs_pair_;

   PNCMapStruct pnc_map_;
   GlobalPathStruct global_path_;
   ReferLineStruct refer_line_;
   LocalPathStruct local_path_;
   LocalSpeedsStruct local_speeds_;
   DecisionStruct decision_;
   ProcessStruct process_;

};
}  // namespace Planning
#endif  // CONFIG_READER_H_
