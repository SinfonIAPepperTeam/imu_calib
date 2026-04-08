#include <rclcpp/rclcpp.hpp>
#include "imu_calib/apply_calib.hpp"  // Adjust path based on your package structure
#include <clocale>                    // <-- Added for locale control

int main(int argc, char **argv)
{
  // Force the C++ parser to use a period (.) for decimals instead of a comma (,)
  std::setlocale(LC_NUMERIC, "C");

  rclcpp::init(argc, argv);

  auto node = std::make_shared<imu_calib::ApplyCalib>();
  rclcpp::spin(node);

  rclcpp::shutdown();
  return 0;
}