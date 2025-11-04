#pragma once
template<typename T1, typename T2>
class MinMax
{
public:
    T1 a_;
    T2 b_;

    MinMax(T1 a, T2 b) :a_(a), b_(b) {};

    T1 Min() {

        return static_cast<T1>((a_ < b_) ? a_ : b_);

    };
};

