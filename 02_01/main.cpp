#include <stdio.h>


//抽象化　一括対応
template <typename Type>Type Min(Type a, Type b) {

    if (a < b) {
        return static_cast<Type>(a);
    }

    return  static_cast<Type>(b);
}

int main() {

    //int
    printf("%d\n", Min<int>(1, 5));
    //float
    printf("%f\n", Min<float>(1.0f, 0.5f));
    //double
    printf("%lf\n", Min<double>(20.0, 20.0));


    return 0;
}