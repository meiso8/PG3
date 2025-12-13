#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
#include <memory>
#include <vector>
int main() {

    std::vector<std::unique_ptr<IShape>> iShapes_;

    iShapes_.push_back(std::make_unique<Circle>());
    iShapes_.push_back(std::make_unique<Rectangle>());

    for (int i = 0; i < iShapes_.size(); ++i) {
        iShapes_[i]->Size();
        iShapes_[i]->Draw();
    }

    return 0;
}