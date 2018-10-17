#ifndef IMPLICATOR_H
#define IMPLICATOR_H

#include <QuadraticEquationSolver.h>
#include <stdexcept>
#include <cmath>
#include <complex>
#include <string>

class QuadraticEquationSolver
{
private:

    typedef std::vector<std::complex<double>> QuadraticEquationAnswer;

    QuadraticEquationAnswer solveQuadraticEquation(double a,double b,double c)
    {
        QuadraticEquationAnswer result;
        if(a==0)
        {
            throw std::runtime_error("Division by zero");
        }
        double discriminant=pow(b,2)-4*a*c;
        if(discriminant>0)
        {
            double x1=(-b+sqrt(discriminant))/(2*a);
            double x2=(-b-sqrt(discriminant))/(2*a);
            result.push_back(std::complex<double>(x1,0));
            result.push_back(std::complex<double>(x2,0));
        }
        else if(discriminant<0)
        {
            double xreal=-b/(2*a);
            double x1img=sqrt(-discriminant)/(2*a);
            double x2img=-x1img;
            result.push_back(std::complex<double>(xreal,x1img));
            result.push_back(std::complex<double>(xreal,x2img));
        }
        else
        {
            double x=-b/(2*a);
            result.push_back(std::complex<double>(x,0));
        }
        return result;
    }
    std::string complexValueToString(const std::complex<double>& complexValue)
    {
        std::string result=std::to_string(complexValue.real());
        if(complexValue.imag())
        {
            if(complexValue.imag()>0)
                result+="+";
            result+=std::to_string(complexValue.imag());
            result+="i";
        }
        return result;
    }
    std::string PrepareAnswer(const QuadraticEquationAnswer& answer)
    {
        std::string result="x1=";
        if(answer.size()==2)
        {
            result+=complexValueToString(answer[0])+", x2="+complexValueToString(answer[1]);
        }
        else if(answer.size()==1)
        {
            result+=complexValueToString(answer[0]);
        }
        else
        {
            throw std::runtime_error("Incorrect number of roots");
        }
        return result;
    }
public:
    bool ServerCallback(nanyageev_ir_13345_2_2::QuadraticEquationSolverRequest& req,
                        nanyageev_ir_13345_2_2::QuadraticEquationSolverResponse& res)
    {

        QuadraticEquationAnswer answer=solveQuadraticEquation(req.a,req.b,req.c);
        res.answer=PrepareAnswer(answer);

        return true;
    }
};

#endif // IMPLICATOR_H
