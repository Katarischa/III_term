Помогалочка к 1 заданию прошлого дз

```c++
#include<iostream>

class UnsignedPointer{
    public:
    UnsignedPointer(unsighed value) {
        pointer = new unsigned(value);
    }
    ~UnsignedPointer(){
        delete pointer;
    }
    private:
    unsigned* pointer; 
};



int main(){
    UnsignedPointer pointer(5u);
    auto another_poiner = pointer;
    return 0;
}
```

Возникает проблема множественного освобождения Решение =delete;

```c++
UnsignedPointer(const UnsignedPointer& another) = delete;
```

```c++
int main(){
//    UnsignedPointer pointer(5u);
//    auto another_poiner = pointer;
    std::string current;
    std::vector<std::string> lines;
    for(; std::cin >> current;) {
    lines.push_back(current);
    std::cout << *lines.rbegin() << std::endl;}
}
    return 0;
    
```

lvalue ссылка -- std::string&

rvalue ссылка -- std::string&&

```c++
int main(){
    UnsignedPointer pointer(5u);
    auto another_poiner = std::move(pointer)<=> 
            UnsignedPointer another_pointer(std::move(pointer));
```

```c++
class Number{
    public:
        Number(int value) : num(value){} 
        Number& operator++(){ // префиксный
            Number tmp = *this;
            this -> num++
                    return *this;
        }
        
        Number operator++(int){ //постфиксный
            Number tmp = *this;
            this -> num++;
            return tmp;
        }
        friend std::ostream& operator<<(std::ostream& ostr, Number number){
            
        }
    private:
        int num
};
```