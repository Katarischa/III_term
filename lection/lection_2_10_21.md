```c++
class Vector {
    public:
        Vector(const std:: vector<double>& new_components
            unsigned new_dimension){
            
        }
        
    private:
        srd::vector<double>components;
        unsigned dimension;
};
```
```stuct``` -- публичная 

```class``` -- доступ закрыт

```c++
int main(){
    Vector v;
}
```

Метод -- функция внутри класса. Имеют доступ ко всем полям класса

```c++
 public:
        Vector(const std:: vector<double>& new_components
            unsigned new_dimension){
        components = new_components;
        dimention = new_dimension;
        }
```
Не можем обратиться через std::cout.

Решение: обратимся к методам

1. Геттеры -- методы, возвращающие поля (константная ссылка или копия. Нельзя менять возвращенные!)
2. Сеттеры -- методы, изменяющие поля

```c++
const std::vector<double>& get_components() const{
    return components;
}
```

```c++
unsigned get_dimension() const{
    return dimension;
}
```

```c++
void set_dimension(unsigned new_dimension) {
    dimention = new_dimention;
    components.resize(new_dimention);
}
```

```c++
void set_components(const std:: vector<double>& new_components)
    components = new_components;
    dimension = mew_dimension.size();
```
Обратимся к геттеру:

```c++
Vector v{{1,2,3},3};
```
К сеттеру:
```c++
std:: cout <<"Our Vector: \n Dimension is"
```

```c++
  Vector(const std:: vector<double>& new_components
            unsigned new_dimension):
            components(new_components), dimension(new_dimension){ }
```
Дружественная функция или класс
```c++
friend const std::vector<double>& get_components(Vector& v);
```

Конструктор создания класса. Можно перегружать

Пустой конструктор
```c++
Vector() = default
```

```c++
Vector(const Vector& another):
components(another.components),
dimension(another.dimention)
{}
```

this -- указатель на данный объект

```c++
void set_dimension(unsigned dimension) {
this->dimention = dimention;
components.resize(dimention);
}
```

```c++
class DynamicVector {
    public:
    DynamicVector(unsigned dimension) {
    this-> dimension = new unsigned(dimension);
    this->components = new double[dimension];
    for(auto i=0u; i < dimonsio; i++){
    this->components[i] = 0.;}
    }
}
        double* get_components() const{
    return components;
private:
    double* components;
    unsigned* dimension;
};
```
```c++
void set_components(std::vector<double>& components){
    *(this->dimension) = components.size();
    auto* new_components = new double[components.stze()];
    for (auto i = 0u; i < components.size(); i++) {
        new_components[i] = components[i];
    }
    delete[] this->components;
    this->components = new_components;
}
```

Нам нужна функция для delete, чтобы не было утечки памяти. Эта функция называется деструктор. Она должна вызываться сама при удалении объекта.

```c++
~DynamicVector(){
    delete dimension;
    delete[] components
}
int main() {
    DynamicVector dynamicVector(5)
    dynamicVector.set_components({5,2,6,146,45})
    std:: cout <<"Our vector \n Dimension is"
}
```

### Идиома RAII -- все что в деструкторе -- удаляется 

```c++
friend std::ostream& operator<<(std::operator& out, const DynamicVector& v){
} 
```

### Многофайловые проекты 

Используем не .cpp, а используем .h

Можем сослаться на часть кода, используя __#include ""__ 
Пример:

```c++
#include "DynamicVector.h" //то, что было написанно человеком
#include <vector> //дефолтная штука
```

### 3 этапа компиляции

1. Препроцессинг
2. Компиляция
3. Сборка (линковка)

Чтобы лишний раз не компилировать все по 2 кругу, заходим в CMakeList.txt 

### Внутреннее и внешнее связывания

В CMakeList.txt создаем новый add_executable

Для импорта переменной используем extern (что-то там)

Внешнее связывание -- возможность связываться с другим .ccp файлом (тот самый extern)

Внутреннее связывание -- связываться с пространстом имен через namespace
```c++
using namespace Coastal{}
int main(){
    Coastal::sort
}
```