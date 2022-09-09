#include <iostream>
#include <vector>


void print_vector_ref(std::vector<int> &value){

    value.push_back(5);
    for (auto &&i : value)
    {
        std::cout << i << '\t';
    }
    std::cout << std::endl;
    
}

void print_vector_value(std::vector<int> value){

    value.push_back(24);
    for (auto &&i : value)
    {
        std::cout << i << '\t';
    }
    std::cout << std::endl;
    
}

int main(int argc, char const *argv[])
{
    std::vector<int> items = {10, 12, 13};
    std::cout << items.max_size()<<std::endl;
    std::cout << items.capacity()<<std::endl;
    std::cout << items.empty()<<std::endl;
    items.shrink_to_fit();
    std::cout << items.capacity()<<std::endl;
    // items.reserve(24);
    
    items.push_back(23);
    //After this pushback it increased the capacity of the container to 6
    items.emplace(items.begin() + 2, 24);
    std::cout << items.capacity()<<std::endl;
    std::cout << items[items.size()-1] << std::endl;
    std::cout << sizeof(items);
    // items.pop_back();
    std::cout << items.size() << std::endl;
    // std::cout << sizeof(items);
    print_vector_ref(items);
    print_vector_ref(items);
    print_vector_ref(items);
    print_vector_ref(items);
    print_vector_value(items);
    print_vector_value(items);
    print_vector_value(items);
    
    

    return 0;
}
