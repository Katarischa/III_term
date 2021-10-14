## Структуры. Битовые поля и объединения, перечисление ##

### 1. Объект - то, что обладает поведением и состоянием. ###

```c++
include <iostream> 

struct Point{ //объявление
double x,y,z;
};

int main(){
Point p{3, 0.5, 6};
Point* pointer__to_p = &p;
std:: cout <<"z coordinate is" << (*pointer_to_p).z << std::endl; //или pointer_to_p->z
```

### Идиома RAII (идет конкретно на классы) ###

```c++
struct Human {
private: //закрывает доступ к изменениям данных, public: - открывает доступ
    std:: string name = "Niki"; //функции-члены
    unsigned age = 12;
};

int main(){
    Human niki;
    std:: cout << "Name is " << niki.name
```    

Конструктор - функция, в которой мы передаем поля

### Перегрузка операторов ###

```c++
include <iostream> 

struct Vect{
double x,y,z;
};

Vect operator*(Vect a, double lambda){
    return {a.x * lambda, a.y * lambda, a.z * lambda};
}
Vect operator-(Vect a, Vect b){
    return {a.x - b.x, a.y - b.y, a.z - b.z}
}
std::ostream& operator<<(std:: ostream& ostr,
        const std::vector<int>& nums) {
    ostr << '[';
    for(const auto& )
}

int main(){
    
}
```

Возращаемый тип operator(аргумент)

Оператор ввода
```c++
std:: cin >> a >>b >> c;

std::istream& operator >> (srd::istream& in, std::vector<int>& v) {
    for (auto& elem: v){
        std::cin >> elem;
    }
    return in;
}
```

## 2. Битовые поля и объединения ##

Битовое поле - некоторое количество бит, расположенных последовательно в памяти, значение которых процессор не способен прочитать из-за особенностей аппаратной реализации.


```c++
#include <bitset>
int x = ab1010;


srd:: cout << std::ios::oct<<x;
std::bitset<4> bools(ab1010);
std cout << bools[0];
```
Объединения:

```c++
union p{                //практически не используется 
    int number;
    std::string line;
};

std:: variant           //используется вместо union
```

```c++
std::variant<int, double> var_var;
var_var = 5;
std::get<int>(var_var) <<std::endl;
var_var = 65.34;
std::cout << std::get<double>(var_var) << std::endl;
```


## 3. Перечисление ##

Оператор "switch" "case":
```c++
char op;
std::cin >> op;
if (op == '+')
    switch(op){
        case "+":
           std::cout << a + b << std::endl;
           break;
        case "-":
            std::cout << a - b << std::endl;
            break;
        case "*":
            std::cout << a * b << std:: endl;
            break;
            }
}
```

```c++
enum class Seasons {
    AUTUMN,
    WINTER,
    SPRING,
    SUMMER
};
int main{
    Seasons seasons = Seasons::SPRING;
};
```

