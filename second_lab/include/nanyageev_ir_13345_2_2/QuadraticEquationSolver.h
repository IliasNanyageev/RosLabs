// Generated by gencpp from file nanyageev_ir_13345_2_2/QuadraticEquationSolver.msg
// DO NOT EDIT!


#ifndef NANYAGEEV_IR_13345_2_2_MESSAGE_QUADRATICEQUATIONSOLVER_H
#define NANYAGEEV_IR_13345_2_2_MESSAGE_QUADRATICEQUATIONSOLVER_H

#include <ros/service_traits.h>


#include <nanyageev_ir_13345_2_2/QuadraticEquationSolverRequest.h>
#include <nanyageev_ir_13345_2_2/QuadraticEquationSolverResponse.h>


namespace nanyageev_ir_13345_2_2
{

struct QuadraticEquationSolver
{

typedef QuadraticEquationSolverRequest Request;
typedef QuadraticEquationSolverResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct QuadraticEquationSolver
} // namespace nanyageev_ir_13345_2_2


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver > {
  static const char* value()
  {
    return "30fb7da69d2ffea0af06ce7cc6bc2256";
  }

  static const char* value(const ::nanyageev_ir_13345_2_2::QuadraticEquationSolver&) { return value(); }
};

template<>
struct DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver > {
  static const char* value()
  {
    return "nanyageev_ir_13345_2_2/QuadraticEquationSolver";
  }

  static const char* value(const ::nanyageev_ir_13345_2_2::QuadraticEquationSolver&) { return value(); }
};


// service_traits::MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverRequest> should match 
// service_traits::MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver > 
template<>
struct MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver >::value();
  }
  static const char* value(const ::nanyageev_ir_13345_2_2::QuadraticEquationSolverRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverRequest> should match 
// service_traits::DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver > 
template<>
struct DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverRequest>
{
  static const char* value()
  {
    return DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver >::value();
  }
  static const char* value(const ::nanyageev_ir_13345_2_2::QuadraticEquationSolverRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverResponse> should match 
// service_traits::MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver > 
template<>
struct MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver >::value();
  }
  static const char* value(const ::nanyageev_ir_13345_2_2::QuadraticEquationSolverResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverResponse> should match 
// service_traits::DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver > 
template<>
struct DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolverResponse>
{
  static const char* value()
  {
    return DataType< ::nanyageev_ir_13345_2_2::QuadraticEquationSolver >::value();
  }
  static const char* value(const ::nanyageev_ir_13345_2_2::QuadraticEquationSolverResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NANYAGEEV_IR_13345_2_2_MESSAGE_QUADRATICEQUATIONSOLVER_H
