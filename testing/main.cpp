
#include <iostream>
#include "../src/library.h"
int main(){
    Vector3<float> vec1{10,20,30};
    Vector3<float> vec2{10,20,30};

   vec1+= vec2;

   auto result = (vec1 * vec2) / Vector3<float>{2,1,2};
    std::cout << result.x << " " << result.y << " " << result.z << std::endl;
}
