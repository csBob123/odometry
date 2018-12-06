// Created by Yu Wang on 03.12.18.
// The header file contains customized data types.

#ifndef RGBD_ODOMETRY_DATA_TYPES_H
#define RGBD_ODOMETRY_DATA_TYPES_H

#include <Eigen/Core>
#include <opencv2/core.hpp>

#ifndef PixelType
#define PixelType CV_32F
#endif

namespace odometry
{
typedef Eigen::Matrix<float, 1, 2> RowVector2f;
typedef Eigen::Vector2f Vector2f;
typedef Eigen::Vector2i Vector2i;
typedef Eigen::Vector4i Vector4i;
typedef Eigen::Vector4f Vector4f;
typedef Eigen::Matrix<float, 6, 1> Vector6f;
typedef Eigen::Matrix<double, 6, 1> Vector6d;
typedef Eigen::Matrix3f Matrix33f;
typedef Eigen::Matrix<float, 4, 4> Matrix44f; // used as camera pose
typedef Eigen::Matrix<double, 4, 4> Matrix44d;
typedef Eigen::Matrix<float, 2, 6> Matrix2ff;

typedef int OptimizerStatus;
typedef int GlobalStatus;

} // namespace odometry

#endif //RGBD_ODOMETRY_DATA_TYPES_H

