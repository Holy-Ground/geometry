/**
 * @file geometry/distance.hpp
 * @author EunSung Yang (seong9115@gmail.com)
 * @brief Distance class declaration for abstract distance
 * @version 1.0.0
 * @date 2023-12-22
 * @copyright Copyright (c) 2023 HolyGround, All Rights Reserved.
 */

// Copyright (c) 2023 HolyGround, All Rights Reserved.
// Authors: EunSung Yang

#ifndef HOLYGROUND__GEOMETRY__DISTANCE_HPP_
#define HOLYGROUND__GEOMETRY__DISTANCE_HPP_

namespace holyground::geometry {
/**
 * @brief The class for abstract distance
 */
class Distance {
 public:
  /**
   * @brief The enum class for distance type.
   */
  enum class Type {
    kKilometer = 0,   ///< Kilometer
    kMeter = 1,       ///< Meter
    kCentimeter = 2,  ///< Centimeter
    kMillimeter = 3,  ///< Millimeter
    kMicrometer = 4,  ///< Micrometer
    kNanometer = 5    ///< Nanometer
  };

 protected:
 private:
};

}  // namespace holyground::geometry

#endif  // HOLYGROUND__GEOMETRY__DISTANCE_HPP_
